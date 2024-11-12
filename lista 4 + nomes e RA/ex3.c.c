/*
Fa¸ca um programa que preencha, por leitura, com valores reais, dois vetores A e B, ambos
de oito elementos, e realize a troca dos elementos desses vetores. Ap´os a execu¸c˜ao do programa, o vetor B
dever´a contem os valores fornecidos para o vetor A e vice-versa.
*/

#include <stdlib.h>
#include <stdio.h>
#define TAMANHO 8

int main(){
  float vetorA[TAMANHO], vetorB[TAMANHO];
  int i;

  printf("Digite 8 valores reais para o vetor A:\n");
  for(i = 0; i < TAMANHO; i++){
    printf("valor %d: ", i + 1);
    scanf("%d", &vetorA[i]);
  }//for
  printf("\n");
  printf("Digite 8 valores reais para o vetor B:\n");
  for(i = 0; i < TAMANHO; i++){
    printf("valor %d: ", i + 1);
    scanf("%d", &vetorB[i]);
  }//for
  printf("\n");

  float temporario;
  for(i = 0; i = TAMANHO; i++){
    temporario = vetorA[i];
    vetorA[i] = vetorB[i];
    vetorB[i] = temporario;
  }//for
  printf("Com a inversão dos valores do vetor:\n");
  printf("\nVetor A: ");
  for (i = 0; i < TAMANHO; i++) {
    printf("%.2f ", vetorA[i]);
}//for

  printf("\nVetor B: ");
  for(i = 0; i < TAMANHO; i++){
    printf("%.2f ", vetorB[i]);
  }//for
  return 0;
}//main
