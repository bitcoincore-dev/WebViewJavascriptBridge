#ifndef __LOGARGV__
#define __LOGARGV__
#include "logargv.h"

int logargv(int *count, char *argv[]){

    if(DEBUG){ printf("logargv:begin\n"); }
    int i = *count;
    while(argv[*count-i] != NULL){
        while(argv[*count-i] != NULL){
        printf("%d:%s\n",i, argv[*count-i]);
        i--;
        }
    }
    if(DEBUG){ printf("logargv:end\n"); }
    return 0;
}
#endif
