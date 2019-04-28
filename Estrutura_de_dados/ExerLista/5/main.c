/*
* Escreva uma função que conte o número de células de uma lista encadeada.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    int n,num;
    node *lista = NULL;

    printf("Digite a quantidade de elementos da lista : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

        recebe_lista(&lista,num);
    }
    printf("Quantidade de celulas = %d",count(lista));
    return 0;
}
