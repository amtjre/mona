/*!
    \file  syscalls.cpp
    \brief syscalls

    Copyright (c) 2003 HigePon
    WITHOUT ANY WARRANTY

    \author  HigePon
    \version $Revision$
    \date   create:2003/03/22 update:$Date$
*/

#include<syscalls.h>
#include<global.h>
#include<io.h>

void syscall_entrance() {

    outportb(0x20, 0x20);

    switch(g_current_process->ebx) {


      case SYSTEM_CALL_PROCESS_SLEEP:

          g_process_manager->sleep(g_current_process, g_current_process->esi);

          break;

      default:
          g_console->printf("syscall:default");
          break;
    }

    return;
}

int syscall_sleep(dword tick) {

    int result;

    asm volatile("movl $%c2, %%ebx \n"
                 "movl %1  , %%esi \n"
                 "int  $0x80       \n"
                 "movl %%eax, %0   \n"
                 :"=m"(result)
                 :"m"(tick), "g"(SYSTEM_CALL_PROCESS_SLEEP)
                 );

    return result;
}
