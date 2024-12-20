#include <stdio.h>
#include <string.h>
#include "log.h"

int logfile(const char *thing)
{
        FILE *f = fopen("/tmp/kotlog.txt", "w");
         
        if (f == NULL)
        {
                printf("logging failed\n");
                return -1;
        }
        else {
                fprintf(f, "%s", thing);
        }

        fclose(f);
}
