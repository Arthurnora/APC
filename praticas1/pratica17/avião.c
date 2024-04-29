/*7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.*/

#include <stdio.h> 
#include <math.h>


int main() {

  float angulo, distancia;
  int altura;
  printf("Digite a distância percorrida pelo avião(Apenas o número): ");
  scanf("%f", &distancia);
  printf("Digite o ângulo de inclinação do avião(Apenas o número): ");
  scanf("%f", &angulo);
  altura = sin(angulo) * distancia;
  printf("A altura alcançada pelo avião é de %d metros.\n", altura);
  
  
  
  




  return 0; 
}