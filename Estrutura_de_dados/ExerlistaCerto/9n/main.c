/*
*   PROJETO DE PROGRAMA��O: CONTAGEM DE PALAVRAS. Digamos que um texto � um vetor
*    de caracteres que cont�m apenas letras, espa�os e sinais de pontua��o. Digamos que
*    uma palavra � um segmento maximal de texto que consiste apenas de letras. Escreva
*    uma fun��o que receba um texto e imprima uma rela��o de todas as palavras que
*    ocorrem no texto juntamente com o n�mero de ocorr�ncias de cada palavra. Use uma
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
