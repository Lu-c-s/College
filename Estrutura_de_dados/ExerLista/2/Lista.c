#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void recebe_lista(node **lista, int num)
{
    node *atual = *lista;

    if(*lista == NULL)
    {
        atual = (node*) malloc(sizeof(node));
        (*lista) = atual;

        atual->x.info = num;
        atual->next = NULL;
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

void lista_para_vetor(node **lista,int *vet,int n)
{
    int i=0;
    node *atual = (*lista);

    while(atual != NULL)
    {
        vet[i] = atual->x.info;
        atual = atual->next;
        i++;
    }
}
void imp_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|",lista->x.info);
        lista = lista->next;
    }
}

