/*
*   Escreva uma fun��o que inverta a ordem das c�lulas de uma lista encadeada (a primeira
*   passa a ser a �ltima, a segunda passa a ser a pen�ltima etc.). Fa�a isso sem usar espa�o
*   auxiliar, apenas alterando ponteiros.
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "BLista.h"

int main()
{
    node *lista = NULL;
    int n,num;

    printf("Digite a quantidade de elementos : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

        recebe_lista(&lista,num);
    }
    imprimi_lista(lista);

    trocar_ordem(&lista);
    printf("\n\n\n");

    imprimi_lista(lista);
    return 0;
}
