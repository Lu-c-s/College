#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

struct node
{
    char info[5];
    struct node *next;
};
typedef struct node Node;

struct pilha
{
    Node *top;
};
typedef struct pilha Pilha;

Pilha *cria_pilha();

char *pilha_pop();

void pilha_pop(Pilha *p,char *x)

int check_pilha(Pilha *p);

Pilha* instru_to_pilha(char *x);

void instru_3_end();
#endif // UTIL_H_INCLUDED
