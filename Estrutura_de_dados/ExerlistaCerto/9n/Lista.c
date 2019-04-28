#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Lista.h"

void ler_texto_arq(char *url, node **texto)
{
    FILE *arq = fopen(url,"rw");
    char buffer2[30];

    if(arq == NULL) printf("Erro ao abrir o arquivo");

    while(!feof(arq))
    {
        fscanf(arq,"%s",buffer2);

        for(int i = 0 ; buffer2[i] != '\0' ; i++)
        {
            if(ispunct( (unsigned char) buffer2[i]))
                buffer2[i] = ' ';
        }
        colocar_na_lista(buffer2,texto);
    }
    fclose(arq);
}

void colocar_na_lista(char *palavra, node **texto)
{
    node *atual = *texto;

        if(*texto == NULL)
        {
            node *new_node = (node*) malloc(sizeof(node));
            char *word = (char*) malloc(sizeof(node) * strlen(palavra));
            strcpy(word,palavra);
            *texto = new_node;

            new_node->info.palavra = word;
            contador_palavras(palavra,texto);

            new_node->next = NULL;
        }
        else
        {
            while(atual->next != NULL)
                atual = atual->next;

            char *word = (char*) malloc(sizeof(node) * strlen(palavra));
            strcpy(word,palavra);

            atual->next = (node*) malloc(sizeof(node));
            atual->next->info.palavra = word;

            contador_palavras(palavra,texto);

            atual->next->next = NULL;
        }
    }
void contador_palavras(char *palavra, node **texto)
{
    node *atual = *texto;

    while(atual != NULL)
    {
        if(strstr(atual->info.palavra,palavra))
        {
            atual->info.ocorrencia++;
        }
        atual = atual->next;
    }
}
void imprimir_texto(node *texto) // para testes
{
    while(texto != NULL)
    {
        printf("|%s|->",texto->info.palavra);
        texto = texto->next;
    }
}
void imprimir_ocorrencias(node *texto)
{
    while(texto != NULL)
    {
        printf("%s - |%d| \n",texto->info.palavra,texto->info.ocorrencia);
        texto = texto->next;
    }
}
void menu()
{
    printf("\n|---------------------------------|\n");
    printf("|Ola seja bem vindo               |\n");
    printf("|                                 |\n");
    printf("|1.Imprimir texto                 |\n");
    printf("|2.Mostrar ocorrencia de palavras |\n");
    printf("|3.Sair                           |\n");
    printf("|---------------------------------|");

    printf("\n\n opcao : ");
}
int checar_se_existe(char *palavra, node **texto, node **texto2)
{
    node *atual = *texto;
    while(atual != NULL)
    {
        if(strstr(atual->info.palavra,palavra) != NULL)
        {
            return 1;
        }
        atual = atual->next;
    }
    return 0;
}
void preencher_lista2(node **texto, node **texto2)
{
    node *atual1 = *texto;
    node *atual2 = *texto2;
/*
    while(atual1 != NULL)
    {
        while()
    }
    */
}

