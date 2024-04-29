#include <stdio.h>
int main(){
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  int tabuada[100];
  int count = 0;

  printf("Tabuada de %d:\n", numero);
  for (int i = 1; i <= 100; i++) {
    tabuada[i] = numero * i;
    if(numero <= 100){
      tabuada[count] = numero * i;
      count++;
    }
  }
  
  
  printf("[");
  for (int i = 0; i < count; i++){
    printf("%i", tabuada[i]);
    if (i != count - 1){
      printf(",");
    }  
  }
  printf("]\n");



  return 0;
}