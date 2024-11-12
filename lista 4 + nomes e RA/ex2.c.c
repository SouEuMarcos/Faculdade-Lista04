/*
Fa¸ca um programa que preencha, por leitura, um vetor inteiro de 20 elementos e determine
quantos elementos diferentes existem nesse vetor. Se, por exemplo, o vetor contiver 10 vezes o valor 1 e 20
vezes o valor -1, a resposta do programa ser´a 2.
*/

#include <stdlib.h>
#include <stdio.h>
#define  TAMANHO 20

int main(){
  int vetor[TAMANHO], i, j, diferentes = 0;

  printf("Digite 20 valores inteiros.\n");
  for(i = 0; i < TAMANHO; i++){
    printf("valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }//for

  for(i = 0; i < TAMANHO; i++){
    int encontrado = 0;
    for(j = 0; j < i; j++){
      if(vetor[i] == vetor[j]){
        encontrado = 1;
        break;
      }//if
    }if(!encontrado){
      diferentes++;
    }//if
  }//for

  printf("Diferentes: %d\n", diferentes);
  return 0;
}
