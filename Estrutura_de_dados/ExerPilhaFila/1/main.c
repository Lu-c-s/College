/*
Faça uma função que receba duas Pilhas e verifique se elas são iguais, retornando verdadeiro ou falso.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#define TRUE 1
#define FALSE 0

int main()
{
    pilha *p1,*p2;
    p1 = criaPilha();
    p2 = criaPilha();

    for(int i = 0 ; i < 5 ; i ++)
    {
        push(p1,i);
        push(p2,i);
    }


    push(p2,5);
    push(p2,1);
    push(p2,6);
    push(p2,7);
    //imprimepilha(p1);
   // imprimepilha(p2);

    if(checkIfEqual(p1,p2) == TRUE)
        printf("As duas pilhas sao iguais");
    else
        printf("As duas pilhas sao diferentes");

    return 0;
}
