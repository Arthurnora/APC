/*7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.*/



#include <stdio.h>
int main(){
  float valor_hora, horas_trabalhadas;
  float inss = 0.11;
  float ir = 0.25;
  printf("Digite o valor da hora de trabalho: ");
  scanf("%f", &valor_hora);
  printf("Digite o total de horas trabalhadas no mês: ");
  scanf("%f", &horas_trabalhadas);
  
  float salario_bruto = valor_hora * horas_trabalhadas;
  float salario_liquido = salario_bruto - (salario_bruto * inss) - (salario_bruto * ir);
  float impostos_descontados = salario_bruto - salario_liquido;
  printf("O salário bruto é de R$%.2f\n", salario_bruto);
  printf("O salário líquido é de R$%.2f\n", salario_liquido);
  printf("Os impostos descontados são de R$%.2f\n", impostos_descontados);
  
  
  


  return 0;
}