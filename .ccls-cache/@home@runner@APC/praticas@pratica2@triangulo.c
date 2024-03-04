/*Faça um programa em C que calcule a área de um triângulo (a = base * altura /
 * 2). Considere base e altura números inteiros maior que 0.*/
#include "stdio.h"
int main(void) {
  
  
  int base = 1.0;
  int altura = 1.0;

  printf("Digite a base do triângulo:\n ");
  scanf("%d", &base);
  printf("Digite a altura do triângulo:\n ");
  scanf("%d", &altura);

  float areaT = (base * altura / 2.0);
  
  
  printf("A área do triângulo é: %.2f\n", areaT);

  return 0;
}
