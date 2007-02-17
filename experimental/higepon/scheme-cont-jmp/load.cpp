#include "scheme.h"

using namespace monash::util;

::util::String load(const char* file)
{
    ::util::String ret;
    FILE* fp = fopen(file, "rb");
    if (NULL == fp)
    {
        fprintf(stderr, "can not open %s\n", file);
        return ret;
    }

    if (-1 == fseek(fp, 0, SEEK_END))
    {
        perror("fseek");
        return ret;
    }

    size_t size = ftell(fp);
    char* buffer = new char[size];ASSERT(buffer);
    if (NULL == buffer)
    {
        fprintf(stderr, "memory error \n");
        return ret;
    }

    fseek(fp, 0, SEEK_SET);

    fread(buffer, 1, size, fp);
    fclose(fp);
    ret = ::util::String(buffer, size);
    delete[] buffer;
    return ret;
}
