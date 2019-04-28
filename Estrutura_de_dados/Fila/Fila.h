#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
struct node
{
    int info;
    struct node *under;

};
typedef struct node node;

void criaFila(node **first,node **last);

void push(node **first,node **last,int info);

void pop(node **topo);

void deleteFila(node **topo);

void imprimeFila(node *topo);

#endif // FILA_H_INCLUDED
