/*
Fa¸ca um programa que calcule uma m´edia m´ovel. O programa dever´a executar um la¸co
de leitura de valores inteiros e positivos. A introdu¸c˜ao de valores negativos servir´a como indicador de
t´ermino do programa. Para cada valor fornecido, dever´a ser impressa a m´edia calculada. A m´edia m´ovel ´e
calculada sobre um n´umero especificado de pontos. Quando se introduz um novo dado, o valor mais antigo ´e
descartado, e o novo valor introduzido ´e incorporado ao c´alculo da m´edia. Esse esquema de substitui¸c˜ao faz
da m´edia n´ıvel um instrumento valioso na an´alise de tendˆencias. Considerar para a solu¸c˜ao deste problema
5 pontos (valores) e iniciar o c´alculo das m´edias ao completar a quinta leitura.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int valores[5] = {0, 0, 0, 0, 0};
  int i = 0, soma = 0, valor;
  float media;

  printf("Valor negativo encerra programa.\n");
  while (1){
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);
    if(valor < 0) break;

    soma -= valores[i];
    valores[i] = valor;
    soma += valores[i];
  i = (i + 1) % 5;

    media = soma / 5.0;
    printf("Media movel: %.2f\n", media);
  }//while
  return 0;
}//main
