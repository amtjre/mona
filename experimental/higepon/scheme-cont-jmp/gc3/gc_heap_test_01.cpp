#include "GCRecord.h"

extern GCRecord root;

static char* dont_sweep;
static char** has_heap_ref;

void test()
{
    char* p = new char[32];
    char* q = new char;
}

void test3()
{
    char* hoge = new char[33];
    has_heap_ref = new char*[34];
    has_heap_ref[2] = new char;
}

void test2()
{
    short* r = new short;
    char* t = new char[5];
    for (int i = 0; i < 5; i++)
    {
        test3();
    }
    dont_sweep = new char[34];
}

int dummy(int i)
{
    if (i > 100) return 100;
    return dummy(i + 1);
}

// sweep OK pattern
int main(int argc, char *argv[])
{
    gc_init();

    int x = 0x12345678;
    int* q = new int;
    test();
    test2();
    int y = 0x99998888;
    dummy(0);
    dont_sweep = NULL; // can sweep
    gc();
    int size = gc_record_size(&root);

    if (size == 3
        && root.next->size == 1
        && root.next->next->size == 136
        && root.next->next->next->size == 4)
    {
        printf("[OK] %s\n", argv[0]);
        return 0;
    }
    else
    {
        printf("%s [NG]\n", argv[0]);
        FOREACH_GC_RECORD(&root, e)
        {
            printf("    not sweeped size = %d\n", e->size);
        }
        return 1;
    }

}
