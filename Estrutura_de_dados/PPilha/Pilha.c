#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void criaPilha(node **topo)
{
    *topo = NULL;
}
void push(node **topo, int info)
{
    node *newNode = (node*) malloc(sizeof(node));
    newNode->info = info;
    newNode->under = *topo;
    *topo = newNode;
}
void pop(node **topo)
{
    node *tmp;
    tmp = (*topo)->under;
    free(*topo);
    *topo = tmp;
}
void deletePilha(node **topo)
{
    node *tmp;
    while((*topo) != NULL)
    {
        tmp = (*topo)->under;
        free(*topo);
        *topo = tmp;
    }
}
void imprimePilha(node *topo)
{
    node *atual = *topo;
    while(atual != NULL)
    {
        printf("|%d|\n",atual->info);
        atual = atual->under;
    }
}
