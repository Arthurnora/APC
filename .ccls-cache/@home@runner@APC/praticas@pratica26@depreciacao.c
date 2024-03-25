/*6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).*/





#include <stdio.h>
int main(){
  float valor_compra, ano_fabricacao, ano_depreciacao;
  printf("Digite o valor de compra: ");
  scanf("%f", &valor_compra);
  printf("Digite o ano de fabricação: ");
  scanf("%f", &ano_fabricacao);
  printf("Digite o ano de depreciação: ");
  scanf("%f", &ano_depreciacao);
  float depreciacao = ((ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra);
  printf("A depreciação do veículo é de R$%.2f\n", depreciacao);
  
  




  return 0;
}