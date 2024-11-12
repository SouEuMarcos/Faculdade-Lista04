/*
Fa¸ca um programa que leia os conte´udos de dois vetores inteiros (X e Y) com 10 elementos
cada e os imprima. O programa dever´a, a seguir:
a) preencher outro vetor U, de forma que esse vetor seja a uni˜ao de X com Y;
b) preencher outro vetor I, de forma que esse vetor seja a intersec¸c˜ao de X e Y;
c) imprimir os dois vetores U e I.
*/

#include <stdlib.h>
#include <stdio.h>
#define TAMANHO 10

int main(){
  int x[TAMANHO], y[TAMANHO], u[TAMANHO * 2], i[TAMANHO];
  int indice1, indice2 = 0, indice3, interseccao = 0;
//Pedindo ao usuário o valor do vetor X.
  printf("Digite 10 numeros inteiros para o vetor X.\n");
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    printf("Valor %d: ", indice1 + 1);
    scanf("%d", &x[indice1]);
  }//for
  printf("\n");
//Pedindo ao usuário o valor do vetor Y.
  printf("Digite 10 numeros inteiros para o vetor Y.\n");
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    printf("Valor %d: ", indice1 + 1);
    scanf("%d", &y[indice1]);
  }//for
//Imprimindo os valores.
printf("\nVetor X e Y\n");
  printf("\nVetor X: ");
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    printf("%d  ", x[indice1]);
  }//for
  printf("\nVetor Y: ");
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    printf("%d  ", y[indice1]);
  }//for
  printf("\n");
//A)
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    u[indice2] = y[indice1];
    indice2++;
  }//for
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    u[indice2] = y[indice1];
    indice2++;
  }//for
//B)
  for(indice1 = 0; indice1 < TAMANHO; indice1++){
    for(indice3 = 0; indice3 < TAMANHO; indice3++){
      if(x[indice1] == y[indice3]){
        i[interseccao] = x[indice1];
        interseccao++;
      }//if
    }//for
  }//for
//C)
  printf("\nVetor X com Y.\n");
  printf("\nVetor U: ");
  for(indice1 = 0; indice1 < indice2; indice1++){
    printf("%d  ", u[indice1]);
  }//for
  printf("\ninterseccao de X e Y.\n");
  printf("\nVetor I: ");
  for(indice1 = 0; indice1 < interseccao; indice1++){
    printf("%d  ", i[indice1]);
  }//for
  printf("\n");
  return 0;
}//main
