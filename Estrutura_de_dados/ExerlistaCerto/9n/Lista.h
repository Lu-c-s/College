#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
struct info
{
    char *palavra;
    int ocorrencia;
};

typedef struct info info;

struct node
{
    info info;
    struct node *next;
};

typedef struct node node;

void menu();
/*
*   Menu com as opções
*/
void ler_texto_arq(char *url,node **texto);
/*
*   Ler o texto de um arquivo
*/
void colocar_na_lista(char *palavra , node **texto);
/*
*   Recebe palavra do ler_texto_arq e coloca na lista
*/
void contador_palavras(char *palavra, node **texto);
/*
*   Recebe uma palavra de colocar_na_lista e confere se ela ja existe na lista
*/
void imprimir_texto(node *texto);
/*
*   Imprimi o texto apartir de uma lista
*/
void imprimir_ocorrencias(node *texto);
/*
*   Imprimi cada palavra junto a quantidade de ocorrencias de cada uma
*/
int checar_se_existe(char *palavra, node **texto, node **texto2);
/*
* checar se a palavra que será colocada na lista ja existe
*/
void preencher_lista2(node **texto, node **texto2);
/*
*   Faz parte da gambiarra
*/
#endif // LISTA_H_INCLUDED
