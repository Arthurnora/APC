#include <stdio.h>

int main(){
  int numero1, numero2;
  printf("Entre com o valor do número 1:");
  scanf("%d", &numero1);
  printf("Entre com o valor do número 2:");
  scanf("%d", &numero2);

  
  int maior_que_zero_menor_que_dez = numero1 > 0 && numero1 < 10;
  printf("O número 1 é maior que zero e menor que dez? %d\n", maior_que_zero_menor_que_dez);
  int menor_que_zero_maior_que_dez = numero2 < 0 || numero2 > 10;
  printf("O número 2 é menor que zero ou maior que dez? %d\n", menor_que_zero_maior_que_dez);
  int nao_maior_que_zero = !(numero1 > 0);
  printf("O número 1 não é maior que zero? %d\n", nao_maior_que_zero);





  return 0;
}