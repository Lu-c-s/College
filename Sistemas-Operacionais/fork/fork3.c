/*
        Programa 3 -
        Faça um programa o programa iniciará imprimindo ovalor 1, o processo pai imprime o valor 2 e o filho o valor 3.
        portanto, na tela deverá aparecer:
        1 2 3
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{

    pid_t pid = fork();

    if(pid > 0){
       printf("1 2 ");
       exit(0);
    }

    if(pid == 0){
            wait(NULL);
            printf("3 ");
            exit(0);
        }
}
