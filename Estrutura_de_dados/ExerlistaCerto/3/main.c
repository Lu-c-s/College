/*
*    3. Escreva uma função que faça uma cópia de uma lista dada.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"


int main()
{
    int n,num;
    node *lista = NULL;
    node *copia = NULL;

    printf("Digite a quantidade de elementos da lista : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

        recebe_lista(&lista,num);
    }

    //(*copia) = (*lista);
    printf("Lista 1\n");
    imprime_lista(lista);

    printf("\ncopiando a lista...\n");
    copia_lista(&lista,&copia);

    printf("Lista 2\n");
    imprime_lista(copia);

    return 0;
}
