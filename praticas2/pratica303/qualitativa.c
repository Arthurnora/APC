/*Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente; 4 = Bom; 5 = Ótimo, e imprima Nota Inválida nos demais casos*/

#include <stdio.h>


int main(){

  float nota;
  printf("Fala uma nota:");
  scanf("%f", &nota);
  if (nota <= 2.0f && nota >= 0.0f ){
    printf("%2.f foi Ruim\n", nota);
  } else if (nota <= 5.0f && nota >= 2.0f){
    printf("%0.f Foi Insuficiente\n", nota);
  } else if (nota >= 6.0f && nota <= 8.0f){
    printf("%0.f Foi Suficiente\n", nota);
  } else if (nota >= 8.0f && nota <= 10.0f){
    printf("%0.f Foi Bom\n", nota);
  } else if (nota >= 10.0f ){
    printf("%2.f Sua nota foi ótima\n", nota);
  }
  return 0;
}