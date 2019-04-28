#include <stdio.h>
#include <stdlib.h>
#include "Arv.h"

int main()
{
    Pilha *p = criaPilha();
    Arv *r = criaArv();
    char exp[30];

    printf("Digite a expressao : ");
    fgets(exp,30,stdin);

    printf("Expressao digitada : %s",exp);

    return 0;
}
