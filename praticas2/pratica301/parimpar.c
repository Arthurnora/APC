/* 1. faça um programa em C que determine se um número inteiro lido é par ou ímpar. */




#include <stdio.h>

int main(){

  int numero;
  printf("Digite um neumero:");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("O número %d é par!\n", numero);

  } else{
    printf("O número %d é ímpar\n", numero);
  }





  return 0;
}