/*Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.*/



#include <stdio.h>
int main(){
  int numero1, numero2;
  printf("Fale 2 números (Dê um espaço entre eles): ");
  scanf("%d %d", &numero1, &numero2);
  int quociente = numero1 / numero2;
  int resto = numero1 % numero2;
  printf("O quociente da divisão é %d e o resto é %d\n", quociente, resto);



  return 0;
}