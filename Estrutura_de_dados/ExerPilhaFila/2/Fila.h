#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;

struct fila
{
    node *first;
    node *last;
};
typedef struct fila fila;

fila * criaFila();

void push(fila *f,int info);

void imprimefila(fila *f);

int checkIfEqual(fila *f1,fila *f2);

int len(fila *f);

#endif // FILA_H_INCLUDED
