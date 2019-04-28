/* Estrutura de dados
* 1. Escreva uma função que copie o conteúdo de um vetor para uma lista encadeada preservando a ordem dos elementos.
* Aluno : Francisco Lucas 161057600061
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "BibLista.h"

int main()
{
    int n;
    node *lista=NULL;

    printf("Digite o tamanho do vetor : ");
    scanf("%d",&n);

    int vet[n];
    // int vet = (int*) malloc( n * sizeof(int));

    for(int i = 0 ; i < n ; i ++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&vet[i]);
    }

    vetor_para_lista(&lista,vet,n);

    printf("\n\n\n Lista \n\n\n");
    imprimir_lista(lista);




    return 0;
}
