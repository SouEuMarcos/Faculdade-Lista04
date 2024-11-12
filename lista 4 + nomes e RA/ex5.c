/*
Escreva um programa que preencha, por leitura, um vetor vet inteiro com 20 elementos, e em
seguida, imprima os valores lidos. O programa dever´a gerar, a partir do vetor “vet”, um vetor “pos” apenas
com os valores positivos maiores que zero. A partir do vetor “pos”, dever´a ser gerado ainda outro vetor,
“semdup”, em que haja apenas uma ocorrˆencia de cada valor existente em “pos”. Tanto o vetor “pos”, como
o vetor “semdup”, devem ser gerados de modo cont´ınuo, da primeira posi¸c˜ao em diante, ou seja, eventuais
posi¸c˜oes n˜ao ocupadas poder˜ao existir apenas no final dos vetores. Ao final do processamento, apresentar os
trˆes vetores. No caso dos vetores “semdup” e “pos”, apresentar apenas suas posi¸c˜oes efetivamente utilizadas.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 20

int main(){
    int vet[TAMANHO], pos[TAMANHO], semdup[TAMANHO];
    int indice1, indice2 = 0, indice3, contador = 0;
    int existe;
//Pedindo ao usuário valores para o vetor VET.
    printf("Digite 20 numeros inteiros para o vetor VET.\n");
    for (indice1 = 0; indice1 < TAMANHO; indice1++){
      printf("Valor %d: ", indice1 + 1);
      scanf("%d", &vet[indice1]);
    }//for
//Imprimindo os valores do vetor VET.
    printf("\nVetor vet: ");
    for(indice1 = 0; indice1 < TAMANHO; indice1++){
      printf("%d ", vet[indice1]);
    }//for
//Vendo quais são os valores maior que 0.
    for(indice1 = 0; indice1 < TAMANHO; indice1++){
      if (vet[indice1] > 0){
        pos[indice2] = vet[indice1];
        indice2++;
        }//if
    }//for
//Calculando as ocorrencias.
    for(indice1 = 0; indice1 < indice2; indice1++){
      existe = 0;
      for (indice3 = 0; indice3 < contador; indice3++){
        if (pos[indice1] == semdup[indice3]){
          existe = 1;
          break;
        }//if
    }//for
    if (!existe){
      semdup[contador] = pos[indice1];
      contador++;
    }//if
  }//for
//Imprimindo o vetor POS.
  printf("\n\nVetor pos: ");
  for(indice1 = 0; indice1 < indice2; indice1++){
    printf("%d ", pos[indice1]);
    }//for
//imprimindo o vetor SEMDUP.
    printf("\nVetor semdup: ");
    for(indice1 = 0; indice1 < contador; indice1++){
      printf("%d ", semdup[indice1]);
    }//for
    printf("\n");
    return 0;
}//main
