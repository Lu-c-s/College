#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;

void criaPilha(node **topo);

void push(node **topo, int info);

void pop(node **topo);

void popn(node **topo, int n);

void imprime(node *topo);



#endif // PILHA_H_INCLUDED
