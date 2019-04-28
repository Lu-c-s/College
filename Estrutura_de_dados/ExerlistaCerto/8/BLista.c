#include <stdio.h>
#include <stdlib.h>
#include "BLista.h"

void recebe_lista(node **lista,int num)
{
    node *atual = *lista;
    if(*lista == NULL) // caso seja o primeiro elemeneto da lista
    {
        atual = (node*) malloc(sizeof(node));
        (*lista) = atual;

        atual->info.info = num;
        atual->next = NULL;
    }
    else // processo para os membros restantes
    {
        while(atual->next != NULL)
            atual = atual->next;

        atual->next = (node*) malloc(sizeof(node));
        atual->next->info.info = num;
        atual->next->next = NULL;
    }
}
void trocar_ordem(node **lista)
{
   node *atual = *lista;
   node *prev= NULL;
   node *next = NULL;

   while(atual->next != NULL)
   {
       next = atual->next;
       atual->next = prev;
       prev = atual;
       atual = next;
   }
   atual->next = prev;
   *lista = atual;
}
void imprimi_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->info.info);
        lista = lista->next;
    }
}
