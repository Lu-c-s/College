#include <stdio.h>
#include <stdlib.h>
#include "BibLista.h"

void vetor_para_lista(node **lista,int *vet,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        node *atual = *lista;
        node *new_node = (node*) malloc(sizeof(node));
        new_node->x.info = vet[i];
        new_node->next = NULL;

        if((*lista) == NULL)
        {
            (*lista) = new_node;
        }
        else
        {
            while(atual->next != NULL)
                atual = atual->next;

            atual->next = new_node;
        }
    }
}
void imprimir_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->x.info);
        lista = lista->next;
    }
}
