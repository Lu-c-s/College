#ifndef BIBLISTA_H_INCLUDED
#define BIBLISTA_H_INCLUDED
struct info
{
    int info;
};
typedef struct info info;

struct node
{
    info x;
    struct node *next;
};
typedef struct node node;

void vetor_para_lista(node **lista,int *vet,int n);

void imprimir_lista(node *lista);
#endif // BIBLISTA_H_INCLUDED
