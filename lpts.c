#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char devices[128]="lpt";
int main(int argc , char *argv[])  
{
                
                FILE *f1;
                char cmd[128];
                printf("\033c\033[43;30m\n%s\n",argv[1]);
                
                f1=fopen(devices,"w");
                fwrite(argv[1],strlen(argv[1]),1,f1);
                fclose(f1);                

                return 0;
}