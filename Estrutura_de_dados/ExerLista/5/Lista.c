#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void recebe_lista(node **lista,int num)
{
    node *atual = *lista;
    if((*lista) == NULL)
    {
        node *new_node = (node*) malloc(sizeof(node));
        (*lista) = new_node;

        new_node->x.info = num;
        new_node->next = NULL;
    }
    else
    {
        while(atual->next != NULL)
            atual = atual->next;

        atual->next = (node*) malloc(sizeof(node));
        atual->next->x.info = num;
        atual->next->next = NULL;
    }

}
void imprime_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->x.info);
        lista = lista->next;
    }
}
int count(node *lista)
{
    int i=0;
    while(lista != NULL)
    {
        i++;
        lista = lista->next;
    }
    return i;
}
