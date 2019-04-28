#include "util.h"
#include <string.h>

Pilha *cria_pilha{
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->top = NULL;
    return p;
}

char *pilha_pop{
    Node *temp = p->top->next;
    char tempS[5] = p->top->info;
    free(p->top);
    p->top = temp;

    return tempS;
}

void pilha_push(Pilha *p,char *x){
    Node *nwnode = (Node*) malloc(sizeof(Node));
    strcpy(nwnode->info,x);
    nwnode->next = p->top;
    p->top = nwnode;
}

int check_pilha(Pilha *p){
    return( p->top == NULL)
}

Pilha* instru_to_pilha(char *x){
    char buffer[5];
}

