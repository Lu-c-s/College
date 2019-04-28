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
*  Imprimi o menu principal do programa com as op��es do usu�rio
*/
void criar_lista_vazia(Node **lista);
/*
*  Cria a fazendo com que a "head" aponte para NULL
*/
void verificar_se_lista_vazia(Node **lista);
/*
*   Verificar se lista est� vazia vendo se a "head" aponta para NULL ou n�o
*/
void inserir_elemento_final(int num,Node **lista);
/*
*   Insere um elemento no final da lista
*/
void inserir_elemento_ordem(Node **lista,int num,int pos);
/*
*  Insere um elemento na posi��o desejada da lista ( come�a a conta do 1)
*/
void excluir_elemento(Node **lista,int info);
/*
*   Exclui o elemento( digitando o valor que desejada excluir )
*   Caso o esteja repetido a fun��o exclui o primeiro que aparecer.
*/
void procurar_info(Node *lista,int info);
/*
*   Informa a posi��o da informa��o digitada
*    Caso a informa�ao esteja repetida ele informa a primeira apari��o;
*/
void deletar_lista(Node **lista);
/*
*   Deleta todos os elementos da memoria e cria uma lista vazia
*/
void imprimir_Lista(Node *lista);
/*
*   Imprimi todos os elementos da lista criada at� o elemento NULL
*/
#endif // BIBLISTA_H_INCLUDED
