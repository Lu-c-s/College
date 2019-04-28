/*
Considere uma pilha P vazia e uma fila F não vazia. Utilizando apenas os testes de fila
 e pilha vazias, as operações Enfileira, Desenfileira, Empilha, Desempilha, e uma variável
 aux do TipoItem, escreva uma função que inverta a ordem dos elementos da fila.
 */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
struct pilha
{
    node *first;
};
typedef struct pilha pilha;
struct fila
{
    node *first;
    node *last;
};
typedef struct fila fila;
pilha *criaPilha()
{
    pilha *p = (pilha*) malloc(sizeof(pilha));
    p->first = NULL;
    return p;
}
fila *criaFila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    f->last = f->first = NULL;
    return f;
}
void pushp(pilha *p, int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    newnode->next = p->first;
    p->first = newnode;
}
void pushf(fila *f, int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    if(f->first == NULL)
    {
        newnode->next = NULL;
        f->first = newnode;
        f->last = newnode;
    }
    else
    {
        f->last->next = newnode;
        f->last = newnode;
        newnode->next = NULL;
    }
}
int popp(pilha *p)
{
    node *temp = p->first->next;
    int tempNum = p->first->info;

    free(p->first);
    p->first = temp;

    return (tempNum);
}
int popf(fila *f)
{
    node *temp = f->first->next;
    int tempNum = f->first->info;

    free(f->first);
    f->first = temp;

    if(f->first == NULL)
        f->last = NULL;

    return (tempNum);
}
int checkfila(fila *f)
{
    return(f->first == NULL);
}
int checkpilha(pilha *p)
{
    return(p->first == NULL);
}
void troca_ordem(fila *f)
{
    pilha *p;
    p = criaPilha();
    while(checkfila(f) != 1)
        pushp(p,popf(f));

    while(checkpilha(p) != 1)
        pushf(f,popp(p));
}
void impFila(fila *f)
{
    node *temp;
    for(temp = f->first ; temp != NULL ; temp = temp->next)
        printf("|%d|->",temp->info);
}

int main()
{
    fila *f;
    f = criaFila();

    for(int i = 0 ; i < 5 ; i++)
        pushf(f,i);

    impFila(f);

    troca_ordem(f);

    printf("\n\n");

    impFila(f);


    return 0;
}
