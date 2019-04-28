/*
*  4. Escreva uma função que concatene duas listas encadeadas (isto é, engate a segunda no
*    fim da primeira).
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
    printf("Lista 2 \n");
    printf("Digie a quantidade de elementos : ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("Digite o elemento [%d] : ",i+1);
        scanf("%d",&num);

       recebe_lista(&lista2,num);
    }

   // imprimir_lista(lista1);
   // imprimir_lista(lista2);

    conc_lista(&lista1,&lista2);

    imprimir_lista(lista1);



    return 0;
}
