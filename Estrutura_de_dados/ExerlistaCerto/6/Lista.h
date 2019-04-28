#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct info
{
    int x;
};
typedef struct info info;

struct node
{
    info t;
    struct node *next;
    struct node *prev;
};
typedef struct node node;

void ad_e_f(node **lista, int elem);

void p(node *lista);

void t(node **lista, int pos1, int pos2);

int t_e(node *lista);
#endif // LISTA_H_INCLUDED
