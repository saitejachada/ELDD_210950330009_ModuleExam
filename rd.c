#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "dat.h"


int main()
{
        int fd;
        char ubuff[]="the size";
        char r[100];
        printf("\nOpening Driver\n");
        fd = open("/dev/etx_device", O_RDWR);
        if(fd < 0) {
                printf("Cannot open device file...\n");
                return 0;
        }


         printf("Reading Value from Driver\n");
        r=write(fd,*ubuff,sizeof(ubuff));
        printf("Value is %s\n", r);

        close(fd);
}



