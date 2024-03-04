/*Faça um programa em C que calcule a área de um triângulo (a = base * altura /
 * 2). Considere base e altura números inteiros maior que 0.*/
#include "stdio.h"
int main(void) {
  float base = 1.0;
  float altura = 1.0;

  float areaT = (base * altura / 2);

  printf("Digite a base do triângulo: ");
  scanf("%f", &base);
  printf("Digite a altura do triângulo: ");
  scanf("%f", &altura);
  printf("A área do triângulo é: %f\n", areaT);

  return 0;
}
