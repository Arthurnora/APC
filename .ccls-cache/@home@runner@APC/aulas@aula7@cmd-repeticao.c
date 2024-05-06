#include <stdio.h>

int main(){
  int numero;

  printf("Entre com um número de 1 a 10: ");
  scanf("%i", &numero);

  if(numero > 0 && numero < 11){
    printf("A tabuada de %i\n", numero);
    printf("1 X %i = %i\n", numero, 1 * numero);
    printf("2 X %i = %i\n", numero, 2 * numero);
    printf("3 X %i = %i\n", numero, 3 * numero);
    printf("4 X %i = %i\n", numero, 4 * numero);
    printf("5 X %i = %i\n", numero, 5 * numero);
    printf("6 X %i = %i\n", numero, 6 * numero);
    printf("7 X %i = %i\n", numero, 7 * numero);
    printf("8 X %i = %i\n", numero, 8 * numero);
    printf("9 X %i = %i\n", numero, 9 * numero);
    printf("10 X %i = %i\n", numero, 10 * numero);
    
  } else{
    printf("Número inválido. Tente novamente\n");
  }





  return 0;
}