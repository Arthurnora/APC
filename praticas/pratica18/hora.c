/*8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).*/


#include <stdio.h>

int main(){
  int segundos = 0;
  int horas = 0;
  int minutos = 0;
  printf("Digite o valor em segundos: ");
  scanf("%i", &segundos);
  horas = segundos / 3600;
  segundos = segundos % 3600;
  minutos = segundos / 60;  
  segundos = segundos % 60;  
  printf("%i horas, %i minutos e %i segundos\n", horas, minutos, segundos);
  
  return 0;
}