#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
struct node
{
    int x;
    struct node *next;
};
typedef struct node node;
//node* criar_node(int num ,node *next);

//node *adicionar(int num, node *lista);

void imprimir_lista(node *lista);

void recebe_lista(node **lista,int num);

void conc_lista(node **lista1, node ** lista2);

#endif // LISTA_H_INCLUDED
