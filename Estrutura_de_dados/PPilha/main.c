#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main()
{

    node *topo;
    int i=0,info;
    printf("Estrutura da dados - Pilha");

    while(i != 7)
    {
        printf("1.Criar Pilha\n");
        printf("2.Empilhar elemento(push)\n");
        printf("3.Desempilhar elemento(pop)\n");
        printf("4.Checar se esta vazia\n");
        printf("5.Deletar pilha\n");
        printf("6.Imprimir pilha\n");
        printf("7.Sair\n");

        scanf("%d",&i);

        switch(i)
        {
        case 1:
            criaPilha(&topo);
            printf("Pilha criada!\n");
        case 2:
            printf("Digite o elemento que deseja colocar na pilha :");
            scanf("%d",&info);
            push(&topo,info);
        case 3:
            pop(&topo);
        case 4:
            if((*topo) == NULL)
                printf("\nA lista esta vazia.\n");
            else
                printf("\nA lista nao esta vazia.\n");
        case 5:
            deletePilha(&topo);
        case 6:
            imprimePilha(topo);
        }
    }
    return 0;
}
