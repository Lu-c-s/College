/*
*   7. Escreva uma função que verifique se duas listas dadas são iguais, ou melhor, se têm o
*    mesmo conteúdo.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"


int main()
{
    node *lista1=NULL;
    node *lista2=NULL;
    int n,num;

    printf("Lista 1 \n");
    printf("Digite a quantidade de elementos : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

        recebe_lista(&lista1,num);
    }
    organizar_lista(lista1);

    printf("Lista 2 \n");
    printf("Digie a quantidade de elementos : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

       recebe_lista(&lista2,num);
    }
    organizar_lista(lista2);

    imprimir_lista(lista1);
    printf("\n\n\n");
    imprimir_lista(lista2);

    conferir_lista(lista1,lista2);

    return 0;
}
