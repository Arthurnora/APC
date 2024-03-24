/*9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.*/

#include <stdio.h>

int main(){
  int anos = 0;
  int meses = 0;
  int dias = 0;
  


  printf("Digite uma data no formato dias/meses/anos: ");
  scanf("%i/%i/%i", &dias, &meses, &anos);
  int total_dias = (anos * 365) + (meses * 30) + dias;
  printf("O total de dias é: %i\n", total_dias);
  return 0;



  
  return 0;
}