#include <stdio.h>
#include <stdlib.h>
#include "Arv.h"

Arv * insere(Arv *no,char a)
{
    if(no == NULL)
        if(a == '+' || a =='-' || a =='*' || a =='/')

}

Arv * newleaf(float info)
{
     Arv * r = (Arv*) malloc(sizeof(Arv));
     r->esq = r->dir = NULL;
     r->valor = info;

     return r;
}
Arv * criaArv()
{
    Arv * r = (Arv*) malloc(sizeof(Arv));
    r->dir = NULL;
    r->esq = NULL;

    return r;
}

Pilha * criaPilha()
{
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;

    return p;
}

float pilhaPop(Pilha *p)
{
    No *temp = p->topo->prox;
    float tempNum = p->topo->info ;

    free(p->topo);
    p->topo = temp;

    return (tempNum);
}

void pilhaPush(Pilha *p,float info)
{
    No *tmp = (No*) malloc(sizeof(No));
    tmp->info = info;
    tmp->prox = p->topo;
    p->topo = tmp;
}

int checkPilha(Pilha *p)
{
    return (p->topo == NULL);
}
void ImprimeArv(Arv *raiz);

float avalia(Arv *raiz);
