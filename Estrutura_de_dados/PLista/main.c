#include <stdio.h>
#include <stdlib.h>
#include "BibLista.h"
//-------
//TODO : excluir elemento-> o codigo nao esta funcionando
//------

int main()
{
    Node *lista;

    int i=0,j=0,pos=0;
    int num;
    while(i != 9)
    {
        menu();
        scanf("%d",&i);

        switch(i)
        {
        case 1:
            criar_lista_vazia(&lista);
            printf("\n\n Lista criada\n\n");
            break;
        case 2:
            printf("Digite a quantidade de elementos que deseja adicionar : ");
            scanf("%d",&j);

            for(int i = 0 ; i < j ;i++)
            {
                printf("\n Digite o elemento que deseja adicionar :  ");
                scanf("%d",&num);
                inserir_elemento_final(num,&lista);
            }
            break;
        case 3:
            printf("Digite o numero desejado : ");
            scanf("%d",&num);
            printf("Digite a posicao desejada : ");
            scanf("%d",&pos);

            inserir_elemento_ordem(&lista,num,pos);
            break;
        case 4:
            printf("Digite o elemento que deseja deletar : ");
            scanf("%d",&num);

            excluir_elemento(&lista,num);
            printf("Elemento deletado!\n\n");
            break;
        case 5:
            printf("Digite o numero que deseja procurar : ");
            scanf("%d",&num);

            procurar_info(lista,num);
            break;
        case 6:
            verificar_se_lista_vazia(&lista);
            break;
        case 7:
            imprimir_Lista(lista);
            break;
        case 8:
            printf("\n\nLista deletada!\n\n");

            deletar_lista(&lista);
            break;

        }
    }
    return 0;
}
