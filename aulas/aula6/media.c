#include <stdio.h>

int main(){
  float nota1, nota2;
  printf("Entre com a primeira nota:");
  scanf("%f", &nota1);

  printf("Entre com a segunda nota:");
  scanf("%f", &nota2);

  float media = ((nota1 + nota2) / 2);

  if (nota1 > 10 && nota1 < 0 || nota2 > 10 && nota2 < 0){
    printf("Alguma nota é inválida ae");
    return 0;
  } else{
    printf("A sua média é %f", media);
  }






  return 0;
}