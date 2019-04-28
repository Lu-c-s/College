#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void ad_e_f(node **lista, int elem)
{
    node *atual = *lista;
    node *new_node = (node*) malloc(sizeof(node));

    new_node->t.x = elem;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(*lista == NULL)
    {
        *lista = new_node;
        return;
    }

    while(atual->next != NULL)
        atual = atual->next;

    atual->next = new_node;
    atual->next->prev = atual;
}

void p(node *lista)
{
    while (lista != NULL)
    {
        printf("|%d|->",lista->t.x);
        lista = lista->next;
    }

}
void t(node **lista, int pos1, int pos2)
{
   node *tmp;





   /* Prototype 2
    int i=0,aux=0;
    node *tmp1 = NULL;
     node *tmp2 = NULL;
    node *atual = *lista;

    if(pos1 > pos2)
    {
        aux = pos1;
        pos1 = pos2;
        pos2 = aux;
    }
    while(i != pos2)
    {
        if(i+1 == pos1)
        {
            tmp1 = atual;
        }
         if(i+1 == pos2)
        {
            tmp2 = atual;
        }
    i++;
    atual = atual->next;
    }

    tmp1->next->prev = tmp2;
    if(tmp1->prev != NULL)
      tmp1->prev->next = tmp2;

    tmp2->prev->next = tmp1;
    if(tmp2->next != NULL)
        tmp2->next->prev = tmp1;

    tmp1->next = tmp2->next;
    tmp1->prev = tmp2->prev;

    tmp2->next = tmp1->next;
    tmp2->prev = tmp1->prev;
    */
}

int t_e(node *lista)
{
    int i=0;
    while(lista != NULL)
    {
        i++;
        lista = lista->next;
    }
    return i;
}
/*
void t(node **lista, int pos1, int pos2)
{
    int i=0,aux=0;

    node *tmp1=0;
    node *tmp2=0;
    node *tmp3=0;
    node *tmp4=0;

    node *atual = *lista;
    if(pos1 > pos2)
    {
        aux = pos1;
        pos1 = pos2;
        pos2 = aux;
    }

    while(i != pos1-1 && atual->next != NULL)
    {
        atual = atual->next;
        i++;

        tmp1 = atual->next;
        tmp2 = atual->prev;
    }
    i = 0;

    while ( i != pos2-1 && atual->next != NULL)
    {
        atual = atual->next;
        i++;

        tmp3 = atual->next;
        tmp4 = atual->prev;
    }
    atual = lista; // rewind
    while(atual->next != 0 )
    {
        if(i == pos1-1)
        {
            atual->next = tmp3;
            atual->prev = tmp4;
            tmp3->prev = atual;
            tmp4->next = atual;

        }
        if(i == pos2-1)
        {
            atual->next = tmp1;
            atual->prev = tmp2;
            tmp1->next = atual;
            tmp2->prev = atual;
        }
        i++;
        atual = atual->next;
    }
}
*/
