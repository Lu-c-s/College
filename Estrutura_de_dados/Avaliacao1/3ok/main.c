#include <stdio.h>
#include <stdlib.h>
struct Lista2
{
    int info;
    struct Lista2*next;
    struct Lista2*prev;
};
typedef struct Lista2 Lista2;
Lista2 *crialista ()
{
   return NULL;
}
void insert(Lista2 **lista, int info)
{
    Lista2 *newLista2 = (Lista2*) malloc(sizeof(Lista2));
    Lista2 *temp = *lista;
    newLista2->info = info;

    if(*lista == NULL)
    {
        *lista = newLista2;
        newLista2->next = NULL;
        newLista2->prev = NULL;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newLista2;
    newLista2->prev = temp;
    newLista2->next = NULL;
}
Lista2 *remove_info(Lista2 *lista,int info)
{
    node *temp = lista;
    while(temp->info != info)
        temp = temp->next;

    if(lista == NULL || temp == NULL) return;

    if(lista == temp) lista = temp->next; // se nó a ser deletado for primeiro

    if(temp->next != NULL)  temp->next->prev = temp->prev; // caso o nó a ser deletado não seja o ultimo

    if(temp->prev != NULL) temp->prev->next = temp->next; // se o nó a ser deletado não seja o primeiro

    free(temp);
    return lista;
}
int main()
{
    Lista2 *lista = crialista();
    insert(&lista,1);
    insert(&lista,4);
    insert(&lista,3);
    insert(&lista,2);


    return 0;
}
