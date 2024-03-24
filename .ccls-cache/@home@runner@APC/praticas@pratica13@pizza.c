/*3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.*/
#include <stdio.h>

int main () {
  const float pi = 3.14f;
  int raio; 
  printf("Fala o raio da pizza ae: ");
  scanf("%i", &raio);
  
  float perimetro = (2 * pi) * raio;
  printf("O perímetro então vai ser: %.2f\n ", perimetro);
 
  





  return 0;
}








