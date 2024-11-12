/*
Seja um vetor inteiro de 9 elementos. Escreva um programa que realize a seguinte sequˆencia
de a¸c˜oes na ordem indicada:
a) preenchimento do vetor por leitura, sendo aceitos para armazenamento apenas valores positivos, maiores do que zero;
b) impress˜ao dos elementos do vetor em uma linha, usando dois espa¸cos brancos para separar os valores
de cada elemento;
c) rota¸c˜ao dos elementos do vetor, com o deslocamento de todos os valores dos elementos para a posi¸c˜ao
seguinte, exceto o ´ultimo valor, que deve ser colocado na posi¸c˜ao do primeiro elemento;
d) repetir o item b);
e) soma do ´ındice de cada elemento ao conte´udo da posi¸c˜ao correspondente;
f) repeti¸c˜ao do item b);
g) leitura de um valor inteiro. Determinar e apresentar o n´umero de ocorrˆencias desse valor no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetor[9], i;
//A)===
  for(i = 0; i < 9; i++){
    do{
      printf("Digite apenas valores positivos maior que zero.\nValor %d: ", i);
      scanf("%d", &vetor[i]);
    }while(vetor[i] <= 0);
  }//for
//B)===
  printf("\n");
  for(i = 0; i < 9; i++){
    printf("%d  ", vetor[i]);
  }//for
  printf("\n");
//C)===
  int ultimo;
  ultimo = vetor[8];
  for(i = 8; i > 0; i--){
    vetor[i] = vetor[i - 1];
  }//for
  vetor[0] = ultimo;
//D)===
  printf("\n");
  printf("Pos rotacao: ");
  for(i = 0; i < 9; i++){
    printf("%d  ", vetor[i]);
  }//for
  printf("\n");
//E)===
  for(i = 0; i < 9; i++){
    vetor[i] += i;
  }//for
//F)===
  printf("\n");
  printf("Pos soma:  ");
  for(i = 0; i < 9; i++){
    printf("%d  ", vetor[i]);
  }//for
  printf("\n");
//G)===
  printf("\n");
  int valor, ocorrencias = 0;
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);
  for(i = 0; i < 9; i++){
    if(vetor[i] == valor){
      ocorrencias++;
    }//if
  }//for
  printf("\n");
  printf("O numero de ocorrencias do valor %d no vetor e: %d\n", valor, ocorrencias);
  return 0;
}//main
