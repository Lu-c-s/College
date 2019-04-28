#ifndef BIBCONJUNTO_H_INCLUDED
#define BIBCONJUNTO_H_INCLUDED

// --------------------- TAD--------------------//
typedef struct
{
    int conjunto[20];
    int tamanho;

}TConjunto;
// -------------FIM TAD -----------------------//

TConjunto CriarConjuntoVazio();
/*
  Cria um conjunto vazio definindo o tamanho como 0 e enchendo o vetor com 0s
*/

TConjunto LerConjunto();
/*
    Recebe qual o tamanho do conjunto deseja e recebe os valores do conjunto
*/

void UniaoConjunto(TConjunto c1, TConjunto c2);
/*
    Faz a uniao entre os conjuntos 1 e 2 e imprime o resultado
*/

void IntersecaoConjunto(TConjunto c1, TConjunto c2);
/*
    Faz a intersecção enter os conjuntos 1 e 2 e imprime o resultado
*/

void VerificarIgual(TConjunto c1, TConjunto c2);
/*
    Verifica se os conjuntos 1 e 2 são iguais
*/

void ImprimeConjunto(TConjunto c1);
/*
    Imprime todos os elementos do conjunto
*/

TConjunto OrganizarConjunto(TConjunto c1);
/*
    Ordenado o conjunto em ordem crescente atráves do método BubbleSort
*/

#endif // BIBCONJUNTO_H_INCLUDED
