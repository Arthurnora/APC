#include <stdio.h>

int main(){
  float produto;
  float desconto;
  printf("Fala o valor do produto: ");
  scanf("%f", &produto);
  if (produto <= 100.00){
    desconto = produto * 0.01;
  } else if(produto > 100.01 && produto <= 500.00){
    desconto = produto * 0.05;
  } else if(produto > 500.00){
    desconto = produto * 0.1;
  }
  printf("O seu desconto vai ser %.3f", desconto);
  return 0;
}