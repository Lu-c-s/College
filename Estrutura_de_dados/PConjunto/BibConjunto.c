#include <stdio.h>
#include <stdlib.h>
#include "BibConjunto.h"

TConjunto CriarConjuntoVazio()
{
    TConjunto c1;
    c1.tamanho = 0;

    for(int i = 0 ; i < 20 ; i ++)
        c1.conjunto[i] = 0;

    return c1;
}
TConjunto LerConjunto()
{
    TConjunto c1;
    int n;
    printf("Digite a quantidade de elementos do conjunto ( 0 para manter conjunto vazio) :  \n");
    scanf("%d",&n);

    c1.tamanho = n;

    if(n != 0 )
    {
        for(int i = 0 ; i < n ; i++)
        {
            printf("Digite o elemento %d :", i+1);
            scanf("%d",&c1.conjunto[i]);
        }
    }
    else
    {
        printf("Conjunto vazio.\n");
    }

    return c1;
}
void UniaoConjunto(TConjunto c1, TConjunto c2)
{
    int temp[40];
    int count=0;
    int total = c1.tamanho;

    for(int i = 0 ; i < c1.tamanho ; i++) // vai até o total de elemento do conjunto 1 / Coloca todos os elementos do conjunto 1 no temp
        temp[i] = c1.conjunto[i];

    for(int j = 0 ; j < c2.tamanho ; j++) //  confirmar os elementos do segundo conjunto em relação ao "temp" para adicionar os numeros não repetidos
    {
        count=0;
        for(int k = 0 ; k < c1.tamanho ; k++)
        {
            if(c2.conjunto[j] == c1.conjunto[k])
                count++;
        }
        if(count == 0)
        {
            temp[total] = c2.conjunto[j];
            total++;
        }
    }

    for(int l = 0 ; l < total ; l++) //  total =   todos os elementos que foram colocados no vetor temp
        printf("|%d|",temp[l]);
}
void IntersecaoConjunto(TConjunto c1, TConjunto c2)
{
    int temp[40],count=0;

    for(int i = 0 ; i < c1.tamanho ; i++)
    {
        for(int j = 0 ; j < c2.tamanho ; j++)
        {
            if(c1.conjunto[i] == c2.conjunto[j])
            {
                temp[count] = c1.conjunto[i];
                count++;
            }
        }
    }
    if(count == 0)
        printf("Interseccao nao existente!");

    for(int i = 0; i < count ; i++)
        printf("|%d|",temp[i]);
}
void VerificarIgual(TConjunto c1, TConjunto c2)
{
    int teste = 0;
    if(c1.tamanho != c2.tamanho)
    {
        printf("\nOs conjuntos sao diferentes!\n");
    }
    else
    {
        c1 = OrganizarConjunto(c1);
        c2 = OrganizarConjunto(c2);

        for(int i = 0 ; i < c1.tamanho ; i++)
        {
            if(c1.conjunto[i] != c2.conjunto[i])
                teste = 1;
        }

        if(teste == 1)
            printf("Sao diferentes");
        else
            printf("Os conjuntos sao iguais");
    }
}
TConjunto OrganizarConjunto(TConjunto c1)
{
    int swap,count = 1;
    while(count)
    {
        count = 0;
        for(int i = 1 ; i < c1.tamanho ; i++)
        {
            if(c1.conjunto[i] < c1.conjunto[i - 1])
            {
                swap = c1.conjunto[i];
                c1.conjunto[i] = c1.conjunto[i-1];
                c1.conjunto[i-1] = swap;
                count = 1;
            }
        }
    }
    return c1;
}
void ImprimeConjunto(TConjunto c1)
{
    for(int i = 0 ; i < c1.tamanho ; i++)
    {
        printf("|%d|",c1.conjunto[i]);
    }
}
