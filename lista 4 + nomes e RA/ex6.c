/*
Escreva um algoritmo de pesquisa sequencial em um vetor de n´umeros inteiros e que informa
a posi¸c˜ao em que se encontra o valor buscado. Caso esse valor n˜ao seja encontrado, informe a posi¸c˜ao -1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, tamanho, busca;
//Pedindo ao usuário o tamanho do vetor.
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
//criando a variavel vetor e em sequencia pedindo os elementos do vetor.
  int vetor[tamanho];
  printf("Digite os elementos do vetor.\n");
  for(i = 0; i < tamanho; i++){
    printf("Valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }//for
//Pedindo o valor a ser buscado.
  printf("Digite o valor a ser buscado: ");
  scanf("%d", &busca);
//Descobrindo se há ou não esse número dentro do vetor.
  for(i = 0; i < tamanho; i++){
    if(vetor[i] == busca){
      printf("Posicao: %d\n", i + 1);
    }else if(vetor[i] != busca){
      printf("-1\n");
    }//else if
  }//for
  return 0;
}//main
