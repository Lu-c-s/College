#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main()
{
    node *topo;
    criaPilha(&topo);

    push(&topo,4);
    push(&topo,7);
    push(&topo,9);
    push(&topo,5);
    push(&topo,1);
    push(&topo,3);

    imprime(topo);

    popn(&topo,3);
    printf("\n");

    imprime(topo);

    return 0;
}
