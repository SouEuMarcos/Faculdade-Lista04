/*
Fa¸ca um programa para o controle do estoque de uma loja. A loja vende 10 produtos
diferentes. O programa deve iniciar lendo os c´odigos de cada um desses produtos e a quantidade de itens
dos mesmos existente no estoque da loja, armazenando esses valores em dois vetores, um para os c´odigos e
outro para as quantidade de itens (mesmos ´ındices nos dois arranjos devem corresponder ao mesmo produto).
O programa deve processar um conjunto de atualiza¸c˜oes de estoque, com inser¸c˜ao e retirada de itens. No
final do processo, o programa deve fazer uma an´alise do estoque que restou na loja, informando:
a) c´odigos dos produtos que est˜ao com estoque inferior a 10 unidades;
b) n´umero de produtos que apresentam estoque entre 10 e 20 unidades (inclusive); e
c) n´umero total de itens em estoque para cada produto.
*/

#include <stdio.h>
#include <stdio.h>
#define N 10

int main(){
    int codigos[N], estoque[N];
    int i, atualizacoes, codigo, quantidade;
    int baixo_estoque = 0, medio_estoque = 0;
// Lendo os códigos e quantidades iniciais dos produtos
    printf("Insira os codigos e quantidades iniciais dos produtos:\n");
    for(i = 0; i < N; i++){
        printf("Codigo do produto %d: ", i+1);
        scanf("%d", &codigos[i]);
        printf("Quantidade do produto %d: ", i+1);
        scanf("%d", &estoque[i]);
    }//for
// Processando atualizações de estoque
    printf("Insira o numero de atualizacoes de estoque: ");
    scanf("%d", &atualizacoes);
    for(i = 0; i < atualizacoes; i++){
      printf("Insira o codigo do produto: ");
      scanf("%d", &codigo);
      printf("Insira a quantidade (positiva para insercao, negativa para retirada): ");
      scanf("%d", &quantidade);
      for(int j = 0; j < N; j++){
        if(codigos[j] == codigo){
          estoque[j] += quantidade;
          break;
        }//if
      }//for
  }//for
// Analisando o estoque restante
  printf("Produtos com estoque inferior a 10 unidades:\n");
  for(i = 0; i < N; i++){
    if(estoque[i] < 10){
      printf("Codigo: %d\n", codigos[i]);
      baixo_estoque++;
      }else if(estoque[i] >= 10 && estoque[i] <= 20){
        medio_estoque++;
      }//else if
  }//for
  printf("Numero de produtos com estoque entre 10 e 20 unidades: %d\n", medio_estoque);
  printf("Numero total de itens em estoque para cada produto:\n");
  for(i = 0; i < N; i++){
    printf("Codigo: %d - Quantidade: %d\n", codigos[i], estoque[i]);
  }//for
  return 0;
}//main
