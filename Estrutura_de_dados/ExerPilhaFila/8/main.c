/*

Construa uma função que recebe como parâmetros uma Lista L1 e um valor x e que retire os primeiros x da lista L1, inserindo-os no fim de L1. Suponha que a lista está inicialmente preenchida.
É proibido o uso de uma lista auxiliar.

*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;

struct fila
{
    node *first;
    node *last;
};
typedef struct fila fila;

void insert_end(node **lista , int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    newnode->next = NULL;

    node *temp = *lista;
    if(*lista == NULL)
    {
        *lista = newnode;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}
int exclui_first(node **lista)
{
    node *temp = (*lista)->next;
    int NumTemp = (*lista)->info;
    free(*lista);
    *lista = temp;

    return NumTemp;
}
void insert_end_n(node **lista , int n)
{
    for(int i = 0 ; i < n ; i++)
        insert_end(lista,exclui_first(lista));
}
void impLista(node *lista)
{
    for(node *temp = lista ; temp != NULL ; temp = temp->next)
        printf("|%d|->",temp->info);
}
int main()
{
    node *lista=NULL;
    insert_end(&lista,4);
     insert_end(&lista,7);
      insert_end(&lista,6);
       insert_end(&lista,9);
       impLista(lista);
        printf("\n\n\n\n");
        insert_end_n(&lista,2);
        impLista(lista);

    return 0;
}
