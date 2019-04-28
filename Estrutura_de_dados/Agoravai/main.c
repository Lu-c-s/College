#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 30
#define VAZIA -1
struct pilha
{
    char info[TAM];
    int topo;
};
typedef struct pilha pilha;
struct Arv
{
    char tipo;
    char op;
    int valor;
    struct Arv *esq,*dir;
};
typedef struct Arv arv;
struct pilha2
{
    arv * info[TAM];
    int topo;
};
typedef struct pilha2 pilha2;
int checkvazia2(pilha2 *p)
{
    return(p->topo == VAZIA) ? 1 : 0;
}
void criapilha2(pilha2 *p)
{
    p->topo = VAZIA;
}
void push2(pilha2 *p, arv* item)
{
    if(p->topo == (TAM-1))
            printf("Pilha cheia\n");
    else
        {
            ++p->topo;
            p->info[p->topo] = item;
        }
}
arv * pop2(pilha2 *p)
{
    arv *temp = NULL;
    if(!checkvazia2(p))
    {
        temp = p->info[p->topo];
        --p->topo;
    }
    return temp;
}
int checkvazia(pilha *p)
{
    return(p->topo == VAZIA) ? 1 : 0;
}
void criapilha(pilha *p)
{
    p->topo = VAZIA;
}
void push(pilha *p, int info)
{
    if(p->topo == (TAM-1))
            printf("Pilha cheia");
    else
        {
            ++p->topo;
            p->info[p->topo] = info;
        }
}
char pop(pilha *p)
{
    char temp = (char) VAZIA;
    if(!checkvazia(p))
    {
        temp = p->info[p->topo];
        --p->topo;
    }
    return temp;
}
int isOp(char a)
{
    if(a == '+' || a =='-' || a== '*' || a == '/')
        return 1;
    else
        return 0;
}
int prioridade(char a)
{
    if(a == '*' || a == '/' )
        return 2;
    else if (a =='+' || a == '-')
        return 1;

    return 0;
}
void conToPost(char *exp, char*Post,int ispace)
{
    char *i = &exp[0];
    char *p = &Post[0];
    pilha t;
    criapilha(&t);
    char n1;

    while(*i)
    {
        while(*i == ' ' || *i == '\t')
            i++;

        if(isdigit(*i) || isalpha(*i))
        {
            while(isdigit(*i) || isalpha(*i))
            {
                *p = *i;
                p++;
                i++;
            }
            if(ispace)
            {
                *p = ' ';
                p++;
            }
        }

        if(*i == '(')
        {
            push(&t,*i);
            i++;
        }
        if(*i == ')')
        {
            n1 = pop(&t);
            while(n1 != '(')
            {
                *p = n1;
                p++;

                if(ispace)
                {
                    *p = ' ';
                    p++;
                }
                n1 = pop(&t);
            }
            i++;
        }
        if(isOp(*i))
        {
            if(checkvazia(&t))
                push(&t,*i);
            else
            {
                n1 = pop(&t);
                while(prioridade(n1) >= prioridade(*i))
                {
                    *p = n1;
                    p++;
                    if(ispace)
                    {
                        *p = ' ';
                        p++;
                    }
                    n1 = pop(&t);
                }
                push(&t,n1);
                push(&t,*i);
            }
            i++;
        }
    }
    while(!checkvazia((&t)))
    {
        n1 = pop(&t);
        *p = n1;
        p++;

        if(ispace)
        {
            *p = ' ';
            p++;
        }
    }
    *p = '\0';

}
void postToArv(char *pst, arv **raiz)
{
    arv *nw,*op1,*op2;
    char *p = &pst[0];
    char buffer[5];

    pilha2 t;
    criapilha2(&t);
    strcpy(buffer,"");
    while(*p)
    {
        while(*p == ' ' || *p == '\t')
            p++;

        if(isdigit(*p))
        {
                while(isdigit(*p))
                {
                    strcat(buffer,p);
                    p++;
                }

            nw =  malloc(sizeof(arv));
            nw->valor = atoi(buffer);
            nw->esq = NULL;
            nw->dir = NULL;
            nw->tipo = 'n';
            push2(&t,nw);
            strcpy(buffer,"");
        }
        else
        {
            op1 = pop2(&t);
            op2 = pop2(&t);
            nw = malloc(sizeof(arv));
            nw->op = (*p);
            nw->esq = op2;
            nw->dir = op1;
            nw->tipo = 'o';
            push2(&t,nw);
        }
        p++;
    }
    (*raiz) = pop2(&t);
}
void postorder(arv *r)
{
    if(r != NULL)
    {
       postorder(r->esq);
       postorder(r->dir);

        if(r->tipo == 'o')
            printf("%c ",r->op);
        else
            printf("%d ",r->valor);
    }
}
int resultado(arv *r)
{
    if(r->tipo == 'o')
    {
        int op1 = resultado(r->esq);
        int op2 = resultado(r->dir);

        switch(r->op)
        {
            case '+': return op1 + op2;
            case '-': return op1 - op2;
            case '*': return op1 * op2;
            case '/': return op1/op2;
            default: return 0;
        }
    }
    else
        return(r->valor);
}
int main()
{
   char exp[30],pst[30];
    arv *r;
    printf("Digite a expresao ( coloque todos os parenteses ( ate mesmo os desnecessarios) ) \n");
   fgets(exp,sizeof(exp) - 1,stdin);
    exp[strlen(exp) - 1] = '\0';

    conToPost(&exp[0],&pst[0],1);
   // printf("Postfix :: %s",pst);

    postToArv(pst,&r);

    printf("Expressao na pos-ordem ou pos-fixada : \n");
    postorder(r);

    printf("\nResulado da expressao : \n\n");
    printf("%d",resultado(r));

    return 0;
}
