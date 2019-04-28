//Faça uma função que receba três filas, duas já preenchidas em ordem crescente e preencha a última com os valores das duas primeiras em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#define TAMF1 4
#define TAMF2 4
struct node
{
   int info;
   struct node *next;
};
typedef struct node node;
struct fila
{
    node *first;
    node *last;
};
typedef struct fila fila;
fila *criaFila()
{
    fila *f = (fila*) malloc(sizeof(fila));
    f->first = f->last = NULL;
    return f;
}
void push(fila *f, int info)
{
    node *newnode = (node*) malloc(sizeof(node));
    newnode->info = info;

    if(f->first == NULL)
    {
        newnode->next = f->last;
        f->first = newnode;
        f->last = newnode;
    }
    else
    {
        f->last->next = newnode;
        f->last = newnode;
        newnode->next = NULL;
    }
}
int pop(fila *f)
{
    node *temp = f->first->next;
    int tempNum = f->first->info;
    free(f->first);
    f->first = temp;

    if(f->first == NULL)
        f->last = NULL;

    return (tempNum);
}
void vetorf1f2(fila *f1, fila *f2, int *vet)
{
    for(int i = 0; i < TAMF1 ; i++)
        vet[i] = pop(f1);

    for(int i = TAMF1 ; i < TAMF1+TAMF2 ; i++)
        vet[i] = pop(f2);

    //for(int i = 0 ; i < TAMF1 + TAMF2 ; i++)
      //  printf("|%d|-",vet[i]);

}
void quickSort(int *vet, int start , int end)
{
    int pivo,aux;
    int i,j;

    pivo = vet[(start+end)/2];
    i = start;
    j = end;

    while(i <= j)
    {
        while(vet[i] < pivo)
            i++;

        while(vet[j] > pivo)
            j--;

        if(i <= j)
        {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
        }
    }
    if ( j > start)
        quickSort(vet,start,j);
    if(i < end)
        quickSort(vet,j+1,end);
}
void vet_to_fila(int *vet, fila *f)
{
    for(int i = 0 ; i < TAMF1+TAMF2 ; i++)
        push(f,vet[i]);
}
void print_fila(fila *f) // AVISO A FUNÇÃO DELETARA TODA A SUA FILA PARA IMPRIMI-LA PORQUE SIM!
{
    while(f->first != NULL)
        printf("%d -> ",pop(f));
}
int main()
{
    fila *f1,*f2,*f3;
    int vet[TAMF1 + TAMF2];

    f1 = criaFila();
    f2 = criaFila();

    push(f1,2);
    push(f1,16);
    push(f1,21);
    push(f1,33);

    push(f2,15);
    push(f2,30);
    push(f2,57);
    push(f2,80);

    vetorf1f2(f1,f2,vet);
    quickSort(vet,0,TAMF1+TAMF2);

    //for(int i =0 ;i < 8 ; i++)
       // printf("%d - ",vet[i]);

    free(f1);
    free(f2);

    f3 = criaFila();

    vet_to_fila(vet,f3);

    print_fila(f3);

    return 0;
}
