#include "execv_bridge.h"
#include <string.h>
int execv_bridge(const char *path, char *const argv[]){

    if (DEBUG){

        printf("-----------------execv_bridge-----------------\n");

        printf("*argv:%s\n", *argv);
        printf("*path:%c\n", *path);
        printf(" path:%s\n",  path);

        if ((int *)strlen(*argv) > 0){

            printf("(int *)strlen(*argv) = %d\n", (int *)strlen(*argv));
            printf("*argv = %s\n", *argv);

        }

    }
    return execv(*argv, argv);

}
