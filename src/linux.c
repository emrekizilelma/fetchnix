#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <sys/utsname.h>

const void get_linux_sys_info() {

    // Source that helped me -> https://stackoverflow.com/questions/46280456/check-kernel-version-at-runtime-in-c

    struct utsname buffer;
    char *p;
    long ver [16];
    int i = 0;

    errno = 0;

    if (uname(&buffer) != 0) {
        perror("uname");
        exit(EXIT_FAILURE);
    }

    printf("System Name = %s\n", buffer.sysname);
    printf("Node Name   = %s\n", buffer.nodename);
    printf("Release     = %s\n", buffer.release);
    printf("Version     = %s\n", buffer.version);
    printf("Machine     = %s\n", buffer.machine);

#ifdef _GNU_SOURCE

    printf("Domain Name = %s\n", buffer.domainname);

#endif

    p = buffer.release;

    while (*p) {
        if (isdigit(*p)) {
            ver[i] = strtol(p, &p, 10);
            i++;

        } else {
            p++;
        }
    }

    printf("Kernel %ld Major %ld Minor %ld Patch %ld\n", ver[0], ver[1], ver[2], ver[3]);
}
