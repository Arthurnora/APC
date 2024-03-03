/*Faça um programa em C que calcule a área de um triângulo (a = base * altura /
 * 2). Considere base e altura números inteiros maior que 0.*/
#include "stdio.h"
int main(void) {
  int base = 1;
  int altura = 1;

  int areaT = (base * altura / 2);

  printf("Digite a base do triângulo: ");
  scanf("%d", &base);
  printf("Digite a altura do triângulo: ");
  scanf("%d", &altura);
  printf("A área do triângulo é: %d\n", areaT);

  return 0;
}
