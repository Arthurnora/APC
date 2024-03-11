#include <stdio.h>

int main(void) {

  float base, altura;

  printf("Digite a base do triângulo: ");
  scanf("%f", &base);

  printf("Digite a altura do triângulo: ");
  scanf("%f", &altura);

  if (base <= 0) {
    printf("A base do triângulo tem que ser maior que 0.\n");
    return 1;
  }
  if (altura <= 0) {
    printf("A altura do triângulo tem que ser maior que 0.\n");
    return 1;
  }

  float area = (base * altura) / 2.0;

  printf("A área do triângulo é: %.2f\n", area);

  return 0;
}
