#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
void recebe_lista(node **lista,int num)
{
    node *atual = *lista;

    if((*lista) == NULL)
    {
        atual = (node*) malloc(sizeof(node));
        *lista = atual;

        atual->x = num;
        atual->next = NULL;
    }
    else
    {
        while(atual->next != NULL)
         atual = atual->next;

        atual->next = (node*) malloc(sizeof(node));
        atual->next->x = num;
        atual->next->next = NULL;
    }
}
void imprimir_lista(node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->x);
        lista = lista->next;
    }
}
void organizar_lista(node *lista)
{
    int teste,temp;
    node *tmp;
    node *p=NULL;
   do
   {
        teste = 0;
        tmp = lista;
        while(tmp->next != p)
        {
            if(tmp->x > tmp->next->x)
            {
                temp = tmp->x;
                tmp->x = tmp->next->x;
                tmp->next->x = temp;
                teste = 1;
            }
            tmp = tmp->next;
        }
        p = tmp;
    }while(teste);
}
void conferir_lista(node *lista1, node *lista2)
{
    int l1,l2,i=0,teste;

    if( ver_tam_lista(lista1) != ver_tam_lista(lista2))
    {
        printf("\n\n as listas sao diferentes");
        return;
    }
    teste = ver_tam_lista(lista1);

    while(i < ver_tam_lista(lista1))
    {
        if(lista1->x == lista2->x)
            i++;
    }
    if(i == teste)
        printf("\n\n as listas sao iguais");
}
int ver_tam_lista(node *lista)
{
    int i=0;
    while(lista != NULL)
    {
        i++;
        lista = lista->next;
    }
    return i;
}
