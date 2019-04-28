#ifndef BIBLISTA_H_INCLUDED
#define BIBLISTA_H_INCLUDED

// ------------ TAD -------
struct node
{
    int info;
    struct node *next;
};

typedef struct node Node;
//---------- FIM TAD------

void menu();
/*
*  Imprimi o menu principal do programa com as opções do usuário
*/
void criar_lista_vazia(Node **lista);
/*
*  Cria a fazendo com que a "head" aponte para NULL
*/
void verificar_se_lista_vazia(Node **lista);
/*
*   Verificar se lista está vazia vendo se a "head" aponta para NULL ou não
*/
void inserir_elemento_final(int num,Node **lista);
/*
*   Insere um elemento no final da lista
*/
void inserir_elemento_ordem(Node **lista,int num,int pos);
/*
*  Insere um elemento na posição desejada da lista ( começa a conta do 1)
*/
void excluir_elemento(Node **lista,int info);
/*
*   Exclui o elemento( digitando o valor que desejada excluir )
*   Caso o esteja repetido a função exclui o primeiro que aparecer.
*/
void procurar_info(Node *lista,int info);
/*
*   Informa a posição da informação digitada
*    Caso a informaçao esteja repetida ele informa a primeira aparição;
*/
void deletar_lista(Node **lista);
/*
*   Deleta todos os elementos da memoria e cria uma lista vazia
*/
void imprimir_Lista(Node *lista);
/*
*   Imprimi todos os elementos da lista criada até o elemento NULL
*/
#endif // BIBLISTA_H_INCLUDED
