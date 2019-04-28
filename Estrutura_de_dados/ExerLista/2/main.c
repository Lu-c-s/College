#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    int n,num;
    node *lista=NULL;

    printf("Digite a quantidade de elementos da lista : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i ++)
    {
        printf("Digite o elemento da lista [%d] : ",i+1);
        scanf("%d",&num);

        recebe_lista(&lista,num);
    }
    //imp_lista(lista);

    printf("\n\nColocando num vetor...\n\n");

    int vetor[n]; // criando um vetor com o tamanho da lista

    lista_para_vetor(&lista,vetor,n);

    for(int i = 0 ; i < n; i++)
        printf("|%d|",vetor[i]);


}
