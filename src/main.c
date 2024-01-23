#include <stdio.h>
#include <attributes.h>

int main() {
    #ifdef __linux__
        get_linux_sys_info();
    #endif
    return 0;
}