/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/





#include <stdio.h>

int main() {
  int numero, unidade, dezena, centena, milhar;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  unidade = numero % 10;
  dezena = (numero / 10) % 10;
  centena = (numero / 100) % 10;
  milhar = numero / 1000;
  printf("O número %d é decomposto em %d unidades, %d dezenas, %d centenas e %d milhares.\n", numero, unidade, dezena, centena, milhar);
  
  



  return 0;
}