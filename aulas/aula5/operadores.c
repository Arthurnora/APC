#include <stdio.h>

int main(){
  int numero1, numero2;

  printf("Entre com o valor do número 1: ");
  scanf("%d", &numero1);

  printf("Entre com o valor do número 2: ");
  scanf("%d", &numero2);

  int resultado = numero1 + numero2;
  printf("A soma dos numeros é %d\n", resultado);

  resultado = numero1 - numero2;
  printf("A subtração dos numeros é %d\n", resultado);

  float multiplicacao = numero1 * numero2;
  printf("A multiplicação dos numeros é %.2f\n", multiplicacao);

  float divisao = numero1 / numero2;
  printf("A divisão dos numeros é %.2f\n", divisao);

  resultado = numero1 % numero2;
  printf("O resto da divisão dos numeros é %d\n", resultado);

  



  return 0;
}