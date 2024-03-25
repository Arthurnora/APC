#include <stdio.h>
int main(){

  int numero1, numero2, numero3;
  printf("Fale 3 números (Dê um espaço entre eles): ");
  scanf("%d %d %d", &numero1, &numero2, &numero3);

  int media = (numero1 + numero2 + numero3) / 3;
  printf("A média dos números é %d\n", media);

  



  return 0;
}