/* Faça	um	programa	que	o	processo	pai	faz	a	leitura	de	uma	matriz
de	ordem	3	e	o	processo	filho	irá	ordenar	essa	matriz	e	imprimir
na	tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#define LINHA 3
#define COLUNA 3
void ordenar_matriz(int *matriz)
{
    int vet[LINHA*COLUNA];
    int k = 0;
    int aux;
      // passando a matriz para um vetor
       for(int i = 0 ; i < LINHA ; i++){
        for(int j = 0 ; j < COLUNA ; j++){
            vet[k] = matriz[i][j];
            k++;
        }
    }
    // ordernando o vetor
    for(int i = 0 ; i < (LINHA*COLUNA)-1 ; i++){
        for(int j = 0 ; j < (COLUNA*LINHA)-i-1 ; j++){
           if(vet[j] < vet[j+1]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
           }
        }
    }
    k = 0; // zerar o k para poder passar de volta para a matriz
    // passando de vetor de volta para a matriz
    for(int i = 0 ; i < LINHA ; i++){
        for(int j = 0 ; j < COLUNA ; j++){
            matriz[i][j] = vetor[k];
            k++;
        }
    }
}
void imprime_matriz(int *matriz)
{
    for(int i = 0 ; i < LINHA ; i++){
        for(int j = 0 ; j < COLUNA ; j++){
           printf("Elemento [%d][%d] -> %d",i+1,j+1,matriz[i][j]);
        }
    }

}
int main()
{
    int matriz[LINHA][COLUNA];

    for(int i = 0 ; i < LINHA ; i++){
        for(int j = 0 ; j < COLUNA ; j++){
            printf("[%d][%d] = ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    pid_t pid = fork();
    if(pid < 0){
        printf("Fork failed");
        exit(1);
    }
    if(pid == 0){
        ordenar_matriz(matriz);
        imprime_matriz(matriz);
        exit(0);
    }
    wait(NULL);

    return 0;
}
