#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#define TRUE 1
#define FALSE 0

fila * criaFila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    f->first = NULL;
    f->last = NULL;

    return f;
}

void push(fila *f,int info)
{
    node * newnode = (node*) malloc(sizeof(node));
    newnode->info = info;

    if(f->first == NULL)
    {
        newnode->next = f->last;
        f->last = newnode;
        f->first = newnode;
    }
    else
    {
        f->last->next = newnode;
        newnode->next = NULL;
        f->last = newnode;
    }
}
void imprimefila(fila *f)
{
    node *tmp;
    for(tmp = f->first ; tmp != NULL ; tmp = tmp->next)
        printf("|%d|",tmp->info);
}
int len(fila *f)
{
    int n=0;
    node *tmp;
    for(tmp = f->first ; tmp != NULL ; tmp = tmp->next)
        n++;

    return n;
}
int checkIfEqual(fila *f1,fila *f2)
{
    int equal = TRUE;
    node *tmp1,*tmp2;
    if(len(f1) == len(f2))
    {
        for(tmp1 = f1->first, tmp2 = f2->first ; (tmp1 != NULL) ; tmp1 = tmp1->next,tmp2 = tmp2->next)
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
