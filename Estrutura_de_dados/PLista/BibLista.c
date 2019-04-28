#include <stdio.h>
#include <stdlib.h>
#include "BibLista.h"
void menu()
{
     printf("\n\n\nBem - vindo! Programa criacao de listas\n\n\n");
        printf("1. Criar lista Vazia\n");
        printf("2. Inserir elementos no final\n");
        printf("3. Inserir Elemento em ordem\n");
        printf("4. Excluir Elemento do lista\n");
        printf("5. Procurar por uma informacao\n");
        printf("6. Verificar se a lista esta vazia\n");
        printf("7. Imprimir a lista\n");
        printf("8. Deletar a lista\n");
        printf("9. Sair\n\n ");

        printf("----> ");
}
void criar_lista_vazia(Node **lista)
{
    *lista = NULL;
}
void inserir_elemento_final(int num,Node **lista)
{

    Node *new_node = (Node*) malloc(sizeof(Node));
    Node *last = *lista;

    new_node->info = num;
    new_node->next = NULL;

    if(*lista == NULL) // se a lista estiver vazia
      {
        *lista = new_node;
        return;
      }

        while(last->next != NULL)
        last = last->next;

        last->next = new_node;

    /* NAO FUNCIONA - TENTAR ARRUMAR DPS
        Node *last = lista;

        while(last->next != NULL)
            last = last->next;

        Node *new_node = (Node*) malloc(sizeof(Node));

        last->next = new_node;
        new_node->info = num;
        new_node->next = NULL;
   */

}
void imprimir_Lista(Node *lista)
{
    while(lista != NULL)
    {
        printf("|%d|->",lista->info);
        lista = lista->next;
    }
}
void verificar_se_lista_vazia(Node **lista)
{
    if(*lista == NULL)
        printf("Lista esta vazia");
    else
        printf("A lista nao e vazia");
}
void procurar_info(Node *lista,int info)
{
    Node *atual = lista;
    int j=0,i=0; //i = número de elementos iguais a info no vetor ; j = número total de elementos no vetor
    while(atual != NULL)
    {
        if(atual->info == info)
        {
            printf("A info aparace na posicao : %d\n",j+1);
            i++;
        }
    j++;
       atual = atual->next;
    }
    if(i == 0)
        printf("A informacao desejada nao existe na lista\n");
}
void excluir_elemento(Node **lista,int info)
{
    Node *atual = *lista;
    Node *temp=NULL;

    while(atual->next->info != info) // se o proximo elemento for a que deseja ser excluido
         atual = atual->next;

    temp = atual->next->next; // guardar o elemento depois do elemento a ser excluido
    free(atual->next); // libero da memoria o elemento que quero excluir
    atual->next = temp; // ligo o anterior ao elemento excluido ao elemento depois do elemento excluido.
}
void inserir_elemento_ordem(Node **lista,int num, int pos)
{
    Node *atual = *lista;
    Node *temp=NULL;
    int j=0,i=0;

    while(i != pos-2) // ao chegar ao fim desse loop a variavel atual ,next estará apontando pra o local onde devemos inserir o número.// -2=Pois estamos começando a contar a partir do 0 e o elemento na posicao será "empurrado".
    {
        atual = atual->next;
        i++;
    }
     // para verificar se existe algum erro caso o usuário digite uma posição inválida.
      while(atual != NULL)
    {
        j++;
        atual = atual->next;
    }

    if(i > j)
    {
        printf("posicao invalida");
        return;
    }

   Node *new_node = (Node*) malloc(sizeof(Node));
   new_node->info = num;

   temp = atual->next;
   atual->next = new_node;
   new_node->next = temp;
}
void deletar_lista(Node **lista)
{
    Node *atual = *lista;
    Node *temp = atual;

    while(atual != NULL)
    {
        temp = atual->next;
        free(atual);
        atual = temp;
    }
    *lista = NULL;
}

