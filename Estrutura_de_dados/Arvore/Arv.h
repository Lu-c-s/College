#ifndef ARV_H_INCLUDED
#define ARV_H_INCLUDED
struct arv
{
    char op;
    float valor;
    struct arv *esq,*dir;
};
typedef struct arv Arv;

struct no
{
    float info;
    struct no *prox;
};
typedef struct no No;

struct pilha
{
    No *topo;
};
typedef struct pilha Pilha;

Arv * insere(Arv *no, float info);

Arv * criaArv();

Arv * newleaf(float info);

Pilha * criaPilha();

float pilhaPop(Pilha *p);

void pilhaPush(Pilha *p, float info);

int checkPilha(Pilha *p);

void ImprimeArv(Arv *raiz);

float avalia(Arv *raiz);


#endif // ARV_H_INCLUDED
