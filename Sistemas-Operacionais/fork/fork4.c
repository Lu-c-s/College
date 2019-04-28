/*
    Programa 4 - fork
    Faça um programa onde o pai fará a leitura de um vetor de 5 posições, o filho 1 irá imprimir a soma dos números impares e o pai dos números pares.
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#define SIZE 5

int contar_par(int *vetor);

int main()
{
  int fd[2]; // para o pipe
  int vetor[SIZE];

  if(pipe(fd) < 0){
      perror("pipe");
      return -1;
  }

  // recebendo os valores no vetor
  for(int i = 0 ; i < SIZE ; i++){
          printf("Digite o elemento [%d] : ",i+1);
          scanf("%d",&vetor[i]);
  }
  // criando o processo filho
  pid_t pid = fork();

  if(pid < 0){
      printf("Fork falhou");
      exit(1);
  }
  // processo filho
  if(pid == 0){

      close(fd[0]); // fechar o caminho de leitura pois vamos escrever no pipe
      int total = contar_par(vetor);
      printf("Total de pares = %d\n",total);
      write(fd[1],&total,sizeof(total));
      exit(0);
  }
  // processo pai
  if(pid > 0){

      close(fd[1]); // fechou o cano de escrita pois o pai vai apenas receber
      int total_par;
      read(fd[0],&total_par,sizeof(int));
      wait(NULL);
      printf("Total de impares :%d\n",SIZE-total_par);

      exit(0);
  }
  return 0;
}

int contar_par(int *vetor)
{
    int total_pares=0;
    for(int i = 0 ; i < SIZE ; i++){
        if(vetor[i] % 2 == 0){
        total_pares++;
        }
    }
    return total_pares;
}
