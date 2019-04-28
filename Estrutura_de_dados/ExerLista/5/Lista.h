#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
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

void recebe_lista(node **lista,int num);

void imprime_lista(node *lista);

int count(node *lista);


#endif // LISTA_H_INCLUDED
