#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED
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

struct pilha
{
    node *first;
};
typedef struct pilha pilha;

pilha *criaPilha();

fila *criaFila();

void pushFila(fila *f , int info);

void pushPilha(pilha *p , int info);

int len_p(pilha *p);

int len_f(fila *f);

int checkIfEqual(fila *f, pilha *p);

#endif // BIB_H_INCLUDED
