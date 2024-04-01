/*8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).*/

#include <stdio.h>
#include <math.h>

int main(){

  float x1, y1, x2, y2;
  printf("Digite as coordenadas do ponto 1: ");
  scanf("%f, %f", &x1, &y1);
  printf("Digite as coordenadas do ponto 2: ");
  scanf("%f, %f", &x2, &y2);
  float distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  printf("A distância entre os pontos é: %.3f", distancia);




  return 0;
}
