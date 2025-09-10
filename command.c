#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc , char *argv[])  
{
                /* chama command<numero> <estado>, numerando 1..16 */
                char cmd[128];
                printf("\033c\033[43;30m\n");
                //change this line
                snprintf(cmd, sizeof(cmd), "curl www.google.com/%s",argv[1]);
                /* faz system call */
                int rc = system(cmd);
                
                printf("run: '%s' -> rc=%d\n", cmd, rc);
                

                return 0;
}