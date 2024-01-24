#include <stdio.h>

#include <linux.h>
#include <bsd.h>
#include <apple.h>
#include <win32.h>

const void test_linux() {
    printf("You are using linux! \n");
}

const void test_BSD() {
    printf("You are using BSD! \n");
}

const void test_apple() {
    printf("You are using Apple! \n");
}

const void test_win32() {
    printf("You are using Windows! \n");
}

int main() {

    test_(); // Calling significant function from apple.h which is created on apple.c

     #ifdef __linux__
        test_linux();
        //get_linux_sys_info();
    
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