/*
    Faça uma função que receba uma Pilha e uma Fila e verifique se as informações contidas nelas são iguais, retornando verdadeiro ou falso (ver ordem dos elementos).
*/
#include <stdio.h>
#include <stdlib.h>
#include "Bib.h"
#define TRUE 1
#define FALSE 0

int main()
{
    fila *f;
    pilha *p;

    p = criaPilha();
    f = criaFila();

    pushFila(f,3);
    pushFila(f,9);
    pushFila(f,4);
    pushFila(f,6);

    pushPilha(p,6);
    pushPilha(p,4);
    pushPilha(p,9);
    pushPilha(p,3);
    pushPilha(p,6);

    if(checkIfEqual(f,p) == TRUE)
        printf("as fila e pilha sao iguais");
    else
        printf("a fila e pilha sao diferentes");

    return 0;
}
