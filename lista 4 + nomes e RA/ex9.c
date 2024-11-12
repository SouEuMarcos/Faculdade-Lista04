/*
Uma lanchonete vende cinco sandu´ıches diferentes, com os pre¸cos indicados na tabela a seguir:
Fa¸ca um programa que processe diversos pedidos. Em cada pedido, poder˜ao ser solicitadas quantidade
C´odigo Produto Pre¸co Unit´ario (R$)
1 Sandu´ıche aberto 12,00
2 Sandu´ıche universit´ario 3,00
3 Misto quente 4,00
4 Queijo quente 3,50
5 Bauru 6,00
variadas dos v´arios tipos de sandu´ıches. Leia os pre¸cos dos sandu´ıches no in´ıcio do programa e armazene-os
em um vetor, cujos ´ındices correspondem os c´odigos dos sandu´ıches. Armazene o total de itens solicitados
de cada tipo de sandu´ıche em outro vetor. No final de cada pedido, deve ser calculado e informado o valor
total a pagar, al´em do n´umero total de cada um dos itens solicitados. No final do dia, o programa dever´a
informar:
• n´umero de sandu´ıches de cada tipo vendidos;
• valor total (em reais) vendido no dia;
• n´umero de clientes atendidos;
• valor do pedido m´edio.
*/

#include <stdio.h>
#include <stdio.h>

int main(){
  int codigos[5] = {1, 2, 3, 4, 5};
  int quantidade[5] = {0, 0, 0, 0, 0};
  float precos[5] = {12.00, 3.00, 4.00, 3.50, 6.00};
  int opcao, clientes = 0;
  float total = 0;
  float total_vendido = 0;

  printf("Codigo 1: Sanduiche aberto (12.00).\nCodigo 2: Sanduiche universitario (3.00).\nCodigo 3: Misto quente (4.00).\nCodigo 4: Queijo quente (3.50).\nCodigo 5: Bauru (6.00).\n\n");
  printf("Digite 0 para encerrar.\n");

  while (1){
    printf("Digite o codigo do sanduiche: ");
    scanf("%d", &opcao);
    if (opcao == 0){
      printf("Valor total do pedido: R$ %.2f\n", total);
      printf("Quantidade de sanduiches de cada tipo:\n");
      for (int i = 0; i < 5; i++){
        printf("Codigo %d: %d\n", codigos[i], quantidade[i]);
      }//for
      total_vendido += total;
      total = 0;
      clientes++;
      printf("Deseja realizar outro pedido? (1 - Sim / 0 - Nao): ");
      scanf("%d", &opcao);
      if(opcao == 0){
        break;
      }//if
    }else if (opcao >= 1 && opcao <= 5){
      quantidade[opcao - 1]++;
      total += precos[opcao - 1];
    }else{
      printf("Codigo invalido!\n");
    }//else
}//while

printf("Numero de sanduiches de cada tipo vendidos:\n");
for(int i = 0; i < 5; i++){
    printf("Codigo %d: %d\n", codigos[i], quantidade[i]);
}//for

printf("Valor total vendido no dia: R$ %.2f\n", total_vendido);
printf("Numero de clientes atendidos: %d\n", clientes);
printf("Valor do pedido medio: R$ %.2f\n", total_vendido / clientes);
return 0;
}//main
