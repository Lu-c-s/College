#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
void criaPilha(node **topo)
{
    *topo = NULL;
}

void push(node **topo,int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    newnode->next = *topo;
    *topo = newnode;
}
void popn(node **topo,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
         node *tmp;
        tmp = (*topo)->next;
        free(*topo);
        *topo = tmp;
    }
}
void imprime(node *topo)
{
    node *tmp;
    for(tmp = topo ; tmp != NULL ; tmp = tmp->next)
        printf("|%d|",tmp->info);
}

