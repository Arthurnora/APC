#include <math.h>
#include <stdio.h>

int main() {
  float p1 = 1.0;
  float p2 = 1.0;

  printf("Digite a nota da p1: ");
  scanf("%f", &p1);
  printf("Digite a nota da p2:");
  scanf("%f", &p2);

  float media = (0.4 * p1) + (0.6 * p2);

  media = roundf(media * 1000) / 1000;

  printf("A média é: %.3f\n", media);

  if (p1 < 10 && p1 > 0 && p2 < 10 && p2 > 0) {
    printf("Notas válidas\n");
  } else {
    printf("Notas inválidas, tem que colocar uma nota <10\n");
  }
  return 0;
}