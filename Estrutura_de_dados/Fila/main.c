#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main()
{
    node *first,*last;
    int i=0,info;
    printf("Estrutura da dados - Fila");

    while(i != 7)
    {
        printf("1.Criar Fila\n");
        printf("2.Colocar elemento(push)\n");
        printf("3.Tirar elemento(pop)\n");
        printf("4.Checar se esta vazia\n");
        printf("5.Deletar Fila\n");
        printf("6.Imprimir Fila\n");
        printf("7.Sair\n");

        scanf("%d",&i);

        switch(i)
        {
        case 1:
            criaFila(&first,&last);
            printf("Fila criada!\n");
        case 2:
            printf("Digite o elemento que deseja colocar na Fila :");
            scanf("%d",&info);
            push(&topo,info);
        case 3:
            pop(&first);
        case 4:
            if((*first) == NULL)
                printf("\nA Fila esta vazia.\n");
            else
                printf("\nA Fila nao esta vazia.\n");
        case 5:
            deleteFila(&first);
        case 6:
            imprimeFila(first);
        }
    }
    return 0;
}
