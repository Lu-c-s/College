/*
*   PROJETO DE PROGRAMAÇÃO: CONTAGEM DE PALAVRAS. Digamos que um texto é um vetor
*    de caracteres que contém apenas letras, espaços e sinais de pontuação. Digamos que
*    uma palavra é um segmento maximal de texto que consiste apenas de letras. Escreva
*    uma função que receba um texto e imprima uma relação de todas as palavras que
*    ocorrem no texto juntamente com o número de ocorrências de cada palavra. Use uma
*    lista encadeada para armazenar as palavras.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "Lista.h"

int main()
{
    node *texto1=NULL;
    node *texto2=NULL;
    int i=0;
    setlocale(LC_ALL,"Portuguese");
    //colocar_na_lista("Statuuusus",&texto);
   // imprimir_texto(texto);



    while( i != 3)
    {
        menu();

        scanf("%d",&i);

        switch(i)
        {
        case 1:
            imprimir_texto(texto1);
            break;
        case 2:
            ler_texto_arq("doctexto.txt",&texto1);
            preencher_lista2(&texto1,&texto2);
            imprimir_ocorrencias(texto2);
            break;
        }

    }

    return 0;
}
