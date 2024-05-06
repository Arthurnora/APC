#include <stdio.h>

int main(){
  int ano;
  printf("Digita o ano ae: ");
  scanf("%i", &ano);
  if(ano % 4 == 0 || ano % 100 != 0){
    printf("É um ano bissexto\n");
  } else {
    printf("Não é um ano bissexto\n");
  }




  return 0;
}