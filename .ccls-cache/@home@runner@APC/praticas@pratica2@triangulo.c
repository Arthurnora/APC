#include <stdio.h>

int main(void) {

  float base, altura;

  printf("Digite a base do triângulo: ");
  scanf("%f", &base);

  printf("Digite a altura do triângulo: ");
  scanf("%f", &altura);

  if (base <= 0 || altura <= 0) {
    printf("A base e a altura do triângulo tem que ser maiores que 0.\n");
    return 1; 
  }

  float area = base * altura / 2.0;

  printf("A área do triângulo é: %.2f\n", area);

  return 0;
}
