#include <stdio.h>
#include <stdlib.h>
#include "Bib.h"
#define TRUE 1
#define FALSE 0

pilha *criaPilha()
{
    pilha *p = (pilha*) malloc(sizeof(pilha));
    p->first = NULL;
    return p;
}

fila *criaFila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    f->first = f->last = NULL;
    return f;
}
void pushPilha(pilha *p, int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    newnode->next = p->first;
    p->first = newnode;
}
void pushFila(fila *f, int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;

    if(f->first == NULL)
    {
        newnode->next = f->last;
        f->last = newnode;
        f->first = newnode;
    }
    else
    {
        newnode->next = NULL;
        f->last->next = newnode;
        f->last = newnode;
    }
}
int len_p(pilha *p)
{
    int n=0;
    node *tmp;
    for(tmp = p->first ; tmp != NULL ; tmp = tmp->next)
        n++;

    return n;
}
int len_f(fila *f)
{
    int n=0;
    node *tmp;
    for(tmp = f->first ; tmp != NULL ; tmp = tmp->next)
        n++;

    return n;
}
int checkIfEqual(fila *f, pilha *p)
{
    int equal = TRUE;
    node *tmp1=f->first,*tmp2=p->first;

    if(len_f(f) == len_p(p))
    {
        while((tmp1 != NULL))
        {
            if(tmp1->info != tmp2->info)
            {
                equal = FALSE;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    else
        equal = FALSE;

    return equal;
}
