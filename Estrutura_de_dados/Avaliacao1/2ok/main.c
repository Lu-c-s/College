#include <stdio.h>
#include <stdlib.h>
struct node
{
    float info;
    struct node *next;
};
typedef struct node node;
struct fila
{
    node *start;
    node *end;
};
typedef struct fila fila;
fila *criaFila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    f->start = f->end = NULL;
    return f;
}
void push(fila *f, float info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;

    if(f->start == NULL)
    {
        f->start = newnode;
        f->end = newnode;
        newnode->next = NULL;
    }
    else
    {
        f->end->next = newnode;
        f->end = newnode;
        newnode->next = NULL;
    }
}
float pop(fila *f)
{
    node *temp = f->start->next;
    int Ntemp = f->start->info;
    free(f->start);
    f->start = temp;

    if(f->start == NULL)
        f->end = NULL;

    return Ntemp;
}
int checkfila(fila *f)
{
    return (f->start == NULL); // Se lista tiver vazia retorna 1 , caso contrario 0
}
int comparar(fila *f1, fila *f2)
{
    while(checkfila(f1) != 1 && checkfila(f2) != 1)
    {
        if(pop(f1) != pop(f2))
          return 0;
        if((f1->start == NULL && f2->start != NULL) || (f2->start == NULL && f1->start != NULL))
            return 0;
    }
    return 1;
}

int main()
{
    fila *f1 = criaFila();
    fila *f2 = criaFila();

    for(int i = 0 ; i < 5 ; i++)
    {
        push(f1,i);
        push(f2,i);
    }
    push(f2,8);
    printf("%d",comparar(f1,f2));

    return 0;
}
