#include <stdio.h>
int main(){
  float peso, altura;
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("Digite a altura: ");
  scanf("%f", &altura);
  float imc = peso / (altura * altura);   
  printf("O IMC é %.2f\n", imc);
  





  return 0;
}