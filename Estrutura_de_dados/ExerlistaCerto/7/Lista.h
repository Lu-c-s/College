#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
struct node
{
    int x;
    struct node *next;
};
typedef struct node node;

void recebe_lista(node **lista, int num);

void imprimir_lista(node *lista);

void organizar_lista(node *lista);

void conferir_lista(node *lista1, node *lista2);

int ver_tam_lista(node *lista);


#endif // LISTA_H_INCLUDED
