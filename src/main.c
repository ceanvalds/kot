#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "log.h"

int start_compile(int argc, char **argv)
{
        if (argc < 2) {
                printf("kot: no input files\n");
                return -1;
        }
        else if (argc > 2) {
                printf("cannot compile with more than 2 arguments\n");
                return -1; 
        }
        
        logfile("starting compile process\n");
        printf("work in progress lol\n");
}

int main(int argc, char **argv) {
        start_compile(argc, argv);

        return 0;
}
