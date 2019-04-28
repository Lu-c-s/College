/*
*   6. Escreva uma função que troque de posição duas células de uma mesma lista
*      DUPLAMENTE encadeada.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    int n,num,pos1,pos2;
    node *lista = NULL;

    printf("Digite a quantidade de elementos da lista : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

        recebe_lista(&lista,num);
    }

    printf("Digite a primeira posicao");
    scanf("%d",&pos1);
    printf("Digite a segunda posicao");
    scanf("%d",&pos2);

    imprimir_lista(lista);

    trocar_ordem(&lista,pos1,pos2);
        printf("\n\n\n");
     imprimir_lista(lista);

    return 0;
}
