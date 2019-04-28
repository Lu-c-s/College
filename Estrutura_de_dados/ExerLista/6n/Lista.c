#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void recebe_lista(node **lista,int num)
{
    node *atual = *lista;
    if(*lista == NULL)
    {
        node *new_node = (node*) malloc(sizeof(node));
        *lista = new_node;

        new_node->info = num;
        new_node->next = NULL;
        new_node->prev = NULL;
    }
    else
    {
        while(atual->next != NULL)
            atual = atual->next;

        atual->next = (node*) malloc(sizeof(node));
        atual->next->info = num;

        atual->next->prev = atual;
        atual->next->next = NULL;
    }
}
void imprimir_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->info);
        lista = lista->next;
    }
}
void trocar_ordem(node **lista,int pos1,int pos2)
{
    node *tmp1=NULL;
    node *tmp2=NULL;
    node *tmp3=NULL;
    node *tmp4=NULL;

    node *atual = *lista;
    node *atual2 = *lista;
    int i=0,aux=0;

    if(pos1 > pos2)
    {
        aux = pos1;
        pos1 = pos2;
        pos2 = aux;
    }

    while(i != pos1)
    {
        tmp1 = atual;
        tmp2 = atual->next;
        i++;
        atual = atual->next;
    }

    i = 0;

    while(i != pos2)
    {
        tmp3 = atual2;
        tmp4 = atual2->next;
        i++;
        atual2 = atual2->next;
    }

    atual->prev = tmp3;
    atual->next = tmp4;

    atual2->next = tmp2;
    atual2->prev = tmp1;
}
