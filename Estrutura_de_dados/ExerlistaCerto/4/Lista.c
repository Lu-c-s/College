#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
/* não ta funcionandooooooooooooo omg
node* criar_node(int num ,node *next)
{
    node *new_node = (node*) malloc(sizeof(node));

    new_node->x = num;
    new_node->next = next;

    return new_node;
}
node *adicionar(int num, node *lista)
{
    if(lista == NULL)
        return NULL;

    node *atual = lista;

    while(atual->next != NULL)
        atual = atual->next;

    node* new_node = criar_node(num,lista);
    atual->next = new_node;

    return lista;
}
*/
void recebe_lista(node **lista,int num)
{
    node *atual = *lista;
    if((*lista) == NULL)
    {
        node *new_node = (node*) malloc(sizeof(node));
        (*lista) = new_node;

        new_node->x = num;
        new_node->next = NULL;
    }
    else
    {
        while(atual->next != NULL)
            atual = atual->next;

        atual->next = (node*) malloc(sizeof(node));
        atual->next->x = num;
        atual->next->next = NULL;
    }
}

void imprimir_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->x);
        lista = lista->next;
    }
}
void conc_lista(node **lista1, node ** lista2)
{
    node *atual1 = *lista1;
    node *atual2 = *lista2;

    while(atual1->next != NULL)
        atual1 = atual1->next;

    atual1->next = atual2;
}
