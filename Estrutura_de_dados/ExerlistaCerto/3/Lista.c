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
void copia_lista(node **lista1, node **lista2)
{
    node *atual1 = *lista1;
    node *atual2 = *lista2;

    if(*lista1 == NULL) return;

    while(atual1 != NULL)
    {
        if(*lista2 == NULL)
        {
            atual2 = (node*) malloc(sizeof(node));
            *lista2 = atual2;

            atual2->x.info = atual1->x.info;
            atual2->next = NULL;

            atual1 = atual1->next;
        }
        else
        {
            while(atual2->next != NULL)
               atual2 = atual2->next;


            atual2->next = (node*) malloc(sizeof(node));
            atual2->next->x.info = atual1->x.info;
            atual2->next->next = NULL;

            atual1 = atual1->next;
        }
    }
}
