#include <stdio.h>
#include <stdlib.h>
#include "BibConjunto.h"

int main()
{
    int i;

    TConjunto c1;
    TConjunto c2;

    c1 = CriarConjuntoVazio();
    c2 = CriarConjuntoVazio();

    while(i != 6)
    {
        printf("\n\nImplementacao de Conjuntos\n\n\n");
        printf("\nOpcoes\n\n");
        printf("1 - Entrada do Conjunto\n");
        printf("2 - Uniao dos Conjuntos\n");
        printf("3 - Interseccao dos Conjuntos\n");
        printf("4 - Verificar se os conjuntos sao iguais\n");
        printf("5 - Imprimir o Conjunto\n");
        printf("6 - Sair\n");

        scanf("%d",&i);

        switch(i)
        {
        case 1:
            printf("Conjunto 1\n");
            c1 = LerConjunto();
            printf("Conjunto 2\n");
           c2 = LerConjunto();
            break;
        case 2:
            printf("Uniao : \n\n");
            UniaoConjunto(c1,c2);
            break;
        case 3:
            printf("Intersecao : \n\n");
            IntersecaoConjunto(c1,c2);
            break;
        case 4:
            VerificarIgual(c1,c2);
            break;
        case 5:
            printf("Conjunto 1\n");
            ImprimeConjunto(c1);
            printf("\nConjunto 2\n");
            ImprimeConjunto(c2);
            break;
        }
    }
    return 0;
}
