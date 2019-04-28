#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#define TRUE 1
#define FALSE 0

pilha *criaPilha()
{
    pilha *p = (pilha*) malloc(sizeof(pilha));
    p->first = NULL;
    return p;
}

void push(pilha *p, int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    newnode->next = p->first;
    p->first = newnode;
}

void imprimepilha(pilha *p)
{
    node *tmp;
    for(tmp = p->first ; tmp != NULL ; tmp = tmp->next)
        printf("%d\n",tmp->info);
}
int len(pilha *p)
{
    int n=0;
    node *tmp;
    for(tmp = p->first; tmp != NULL ; tmp = tmp->next)
        n++;

    return n;
}
int checkIfEqual(pilha *p1, pilha *p2)
{
    int equal = TRUE;
    node *tmp1,*tmp2;
    if(len(p1) == len(p2))
    {
        for(tmp1 = p1->first, tmp2 = p2->first ; (tmp1 != NULL) ;  tmp1 = tmp1->next, tmp2 = tmp2->next)
        {
            if(tmp1->info != tmp2->info)
            {
                equal = FALSE;
                break;
            }
        }
    }
    else
        equal = FALSE;

    return equal;

}

