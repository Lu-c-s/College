#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Logradouro
{
    char nome[51];
    struct Logradouro *prox;
};
typedef struct Logradouro Logradouro;
struct pilha
{
    Logradouro *start;
};
typedef struct pilha pilha;
pilha *criapilha()
{
    pilha *p = (pilha*) malloc(sizeof(pilha));
    p->start = NULL;
    return p;
}
char * pilha_pop(pilha *p)
{
    static char tempnome[51];
    strcpy(tempnome,p->start->nome);
    Logradouro *templog = p->start->prox;
    free(p->start);
    p->start = templog;
    //printf("<%s>",tempnome);

    return tempnome;
}
void pilha_push(pilha *p,char *x)
{
    Logradouro * newn = (Logradouro*) malloc(sizeof(Logradouro));
    strcpy(newn->nome,x);
    newn->prox = p->start;
    p->start = newn;
}
int pilha_vazia(pilha *p)
{
    return(p->start == NULL);
}
void insert_lista(Logradouro **lista, char *info)
{
    Logradouro *newlog = (Logradouro*) malloc(sizeof(Logradouro));
    strcpy(newlog->nome,info);
    newlog->prox = NULL;
    Logradouro *temp = *lista;

    if(*lista == NULL)
    {
        *lista = newlog;
        return;
    }

    while(temp->prox != NULL)
        temp = temp->prox;

    temp->prox = newlog;
}
int Compara_listas(Logradouro* l1, Logradouro* l2)
{
    pilha *p = criapilha();

    while(l1 != NULL)
    {
        pilha_push(p,l1->nome);
        l1 = l1->prox;
    }
    while(pilha_vazia(p) != 1)
    {
        if(strcmp(pilha_pop(p),l2->nome) != 0)
            return 0;

       l2 = l2->prox;
    }
    return 1;
}
void imprime_lista(Logradouro *l1)
{
    while(l1 != NULL)
    {
        printf("%s\n",l1->nome);
        l1 = l1->prox;
    }
}
int main()
{
    Logradouro *l1 = NULL;
    Logradouro *l2 = NULL;

    insert_lista(&l1,"A");
    insert_lista(&l1,"B");
    insert_lista(&l1,"C");
   // imprime_lista(l1);

    insert_lista(&l2,"C");
    insert_lista(&l2,"B");
    insert_lista(&l2,"A");
    //imprime_lista(l2);

    printf("|%d|",Compara_listas(l1,l2));
    return 0;
}
