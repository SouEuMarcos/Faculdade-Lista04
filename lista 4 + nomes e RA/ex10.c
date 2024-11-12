/*
Uma empresa vende 10 artigos diferentes. Os artigos possuem pre¸cos variados, sendo cada
um identificado por um c´odigo ´unico. Usando vetores para armazenar estas informa¸c˜oes, escreva um programa que:
a) obtenha os c´odigos e os pre¸cos dos 10 artigos e imprima essas informa¸c˜oes;
b) identifique e informe o c´odigo e o pre¸co dos trˆes artigos mais caros;
c) calcule e informe a m´edia dos pre¸cos de todos os artigos;
d) informe os c´odigos dos artigos com pre¸co superior `a media.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int codigos[10];
  float precos[10];
  float soma_precos = 0;
  float media_precos;
  int i, j;
//A)
  for (i = 0; i < 10; i++){
    printf("Digite o codigo do artigo %d: ", i + 1);
    scanf("%d", &codigos[i]);
    printf("Digite o preco do artigo %d: ", i + 1);
    scanf("%f", &precos[i]);
    soma_precos += precos[i];
  }//for

  printf("\nCodigos e precos dos artigos:\n");
  for (i = 0; i < 10; i++) {
    printf("Codigo: %d - Preco: %.2f\n", codigos[i], precos[i]);
  }//for
//B)
  int mais_caros[3] = {0, 0, 0};
  for (i = 0; i < 3; i++){
    for (j = 0; j < 10; j++){
      if (precos[j] > precos[mais_caros[i]]){
        int k;
        for (k = 0; k < i; k++){
          if (mais_caros[k] == j) break;
      }//for
        if (k == i) mais_caros[i] = j;
      }//if
    }//for
  }//for
  printf("\nTres artigos mais caros:\n");
  for(i = 0; i < 3; i++){
    printf("Codigo: %d - Preco: %.2f\n", codigos[mais_caros[i]], precos[mais_caros[i]]);
  }//for
//C)
  media_precos = soma_precos / 10;
  printf("\nMedia dos precos: %.2f\n", media_precos);
//D)
  printf("\nArtigos com preco superior a media:\n");
  for(i = 0; i < 10; i++){
    if(precos[i] > media_precos){
      printf("Codigo: %d\n", codigos[i]);
    }//if
  }//Ffor
  return 0;
}//main
