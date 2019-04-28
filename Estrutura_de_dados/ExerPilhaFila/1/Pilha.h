#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
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

pilha *criaPilha();

void push(pilha *p , int info);

void imprimepilha(pilha *p);

int checkIfEqual(pilha *p1, pilha *p2);

int len(pilha *p);

#endif // PILHA_H_INCLUDED
