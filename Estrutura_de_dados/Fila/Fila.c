#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

void criaFila(node **first,node **last)
{
    *first = NULL;
    *last = NULL;
}

void push(node **first,node **last,int info)
{
    node *newNode = (node*) malloc(sizeof(node));
    newNode->info = info;
    newNode->next = *first;
    *first = newNode;

    /*
    if(*first == NULL)
    {
        *first = newNode;
        newNode->next = *last;
        *last = newNode;
    }
    else
    {
        *last = newNode;
    }

    */


}
