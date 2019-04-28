#ifndef PLHA_H_INCLUDED
#define PLHA_H_INCLUDED

struct node
{
    int info;
    struct node *under;

};
typedef struct node node;
/*
struct pilha
{
    node *first;
};
typedef stuct pilha pilha;
*/
void criaPilha(node **topo);

void push(node **topo, int info);

void pop(node **topo);

void deletePilha(node **topo);

void imprimePilha(node *topo);

#endif // PLHA_H_INCLUDED
