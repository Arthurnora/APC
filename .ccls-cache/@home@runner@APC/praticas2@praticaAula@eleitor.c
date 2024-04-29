#include <stdio.h>

int main(){
  int idade;
  printf("Entre com sua idade: ");
  scanf("%i", &idade);
  if (idade < 16){
    printf("Você não pode votar \n");
  } else if(idade >= 16 && idade < 18){
    printf("A decisão de voto é facultativa pra você :) \n");
  } else if(idade >= 18 && idade <= 70){
    printf("Você tem que votar \n");
  } 




  return 0;
}