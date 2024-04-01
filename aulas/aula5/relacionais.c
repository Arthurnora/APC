#include <stdio.h>

int main (){
  int numero1, numero2;


  printf("Entre com o valor do número 1: ");
  scanf("%d", &numero1);
  printf("Entre com o valor do número 2: ");
  scanf("%d", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os números são iguais? %d\n", sao_iguais);
  
  int sao_diferentes = numero1 != numero2;
  printf("Os números são diferentes? %d\n", sao_diferentes);
  
  int eh_maior = numero1 > numero2;
  printf("O número 1 é maior que o número 2? %d\n", eh_maior);
  
  int eh_menor = numero1 < numero2;
  printf("O número 1 é menor que o número 2? %d\n", eh_menor);
  
  int eh_maior_ou_igual = numero1 >= numero2;
  printf("O número 1 é maior ou igual ao número 2? %d\n", eh_maior_ou_igual);
  
  int eh_menor_ou_igual = numero1 <= numero2;
  printf("O número 1 é menor ou igual ao número 2? %d\n", 
eh_menor_ou_igual);
  
  












  return 0;
}