#include <stdio.h> // Standard C library

#include <linux.h>
#include <bsd.h>
#include <apple.h>
#include <win32.h>
#include <test.h>

int main() {

    //test_(); // Calling significant function from apple.h which is created on apple.c

     #ifdef __linux__

        //test_linux(); its working
        
        get_linux_sys_info();
    
    #elif BSD

        test_BSD();
        //get_bsd_sys_info();

    #elif __APPLE__

        test_apple();
        //get_apple_sys_info();

    #elif _WIN32

        test_win32();
        //get_win32_sys_info();

    #else

        printf("Probably your os which currently you are using, isn't added to program :( \n")

    #endif 

    return 0;
}