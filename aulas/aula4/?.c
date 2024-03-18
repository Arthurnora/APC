#include <stdio.h>

int main() {
  char nome[31] = "";
  int quantidade = 0;
  float valor = 0.0f;

  printf("Digite o nome do produto: ");
  scanf("%[^\n]s", nome);
  printf("Digite a quantidade: ");
  scanf("%i", &quantidade);
  printf("Digite o valor: ");
  scanf("%f", &valor);

  printf("%s %3d %9.2f\n", nome, quantidade, valor);
  

  

  return 0;
}