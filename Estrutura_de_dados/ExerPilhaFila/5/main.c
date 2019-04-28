/*
    Faça um programa que para cada número inteiro de uma sequência terminada por zero,  inseridos em uma Pilha insira o equivalente em binário utilizando Fila.
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node node;
struct pilha
{
    node *start;
};
typedef struct pilha pilha;
struct fila
{
    node *start;
    node *end;
};
typedef struct fila fila;
pilha *criaPilha()
{
    pilha *p = (pilha*) malloc(sizeof(pilha));
    p->start = NULL;
    return p;
}
fila *criaFila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    f->start = f->end = NULL;
    return f;
}
void pushp(pilha *p,int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;
    newnode->next = p->start;
    p->start = newnode;
}
int popp(pilha *p)
{
    node *temp = p->start->next;
    int Ntemp = p->start->info;
    free(p->start);
    p->start = temp;
    return Ntemp;
}
void pushf(fila *f, int info)
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
int popf(fila *f)
{
    node *temp = f->start->next;
    int Ntemp = f->start->info;
    free(f->start);
    f->start = temp;
    return Ntemp;
}
int checkpilha(pilha *p)
{
    return (p->start == NULL);
}
int checkfila(fila *f)
{
    return (f->start == NULL);
}
void converter(pilha *p)
{
    fila *f = criaFila();
    pilha *temp = criaPilha();
    int n=0,res=0;
    while(checkpilha(p) != 1)
    {
        n = popp(p);
        printf("%d -> ",n);
        while(n != 0) // enche a fila(devia ser um pilha) com os valores em binario
        {
            res = n%2;
            n = n/2;
           // pushf(f,res); // FAZER COM FILA???? SE FOSSE UMA PILHA DARIA CERTO
            pushp(temp,res);
        }

        while(checkpilha(temp) != 1)
            //printf("%d",popf(f)); // NÚMEROS ESTÃO SAINDO DE TRAZ PRA FRENTE POR CAUSA DA FILA
             printf("%d",popp(temp));

        printf("\n");
    }
}

int main()
{
    pilha *p = criaPilha();

    pushp(p,0);
    pushp(p,5);
    pushp(p,6);
    pushp(p,9);
    pushp(p,1);
    pushp(p,30);

    converter(p);

    return 0;
}
