#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};

typedef struct node node;

void recebe_lista(node **lista,int num);

void imprimir_lista(node *lista);

void trocar_ordem(node **lista,int pos1, int pos2);

#endif // LISTA_H_INCLUDED
