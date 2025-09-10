#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
                /* chama command<numero> <estado>, numerando 1..16 */
                char cmd[128];
                //change this line
                snprintf(cmd, sizeof(cmd), "curl www.google.com");
                /* faz system call */
                int rc = system(cmd);
                
                printf("run: '%s' -> rc=%d\n", cmd, rc);
                

                return 0;
}