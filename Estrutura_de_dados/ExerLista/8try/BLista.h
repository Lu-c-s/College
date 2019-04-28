#ifndef BLISTA_H_INCLUDED
#define BLISTA_H_INCLUDED
struct info
{
    int info;
};
typedef struct info info;

struct node
{
    info info;
    struct node *next;
};
typedef struct node node;

void recebe_lista(node **lista,int num);

void trocar_ordem(node **lista);

void imprimi_lista(node *lista);



#endif // BLISTA_H_INCLUDED
