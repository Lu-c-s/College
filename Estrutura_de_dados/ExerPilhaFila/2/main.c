/*
    Faça uma função que receba duas Filas e verifique se elas são iguais, retornando verdadeiro ou falso.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#define TRUE 1
#define FALSE 0

int main()
{
    fila *f1,*f2;

    f1 = criaFila();
    f2 = criaFila();

    for(int i = 0 ; i < 5 ; i++)
    {
        push(f1,i);
        push(f2,i);
    }

   // push(f2,5);
   // push(f2,5);
   // push(f2,3);
   // push(f2,9);


    if(checkIfEqual(f1,f2) == TRUE)
        printf("as filas sao iguais");
    else
        printf("as filas sao diferentes");

    return 0;
}
