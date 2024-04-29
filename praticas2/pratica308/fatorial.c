#include <stdio.h>

int main(){
  int numero;
  printf("Fala o número que você quer que seja fatorado: ");
  scanf("%i", &numero);
  printf("O seu número fatorado é:\n ");
  int fator = 1;
  for (int i = numero; i >= 1; --i){
    fator = fator * i;
    printf("%i! = %i\n", numero, fator);
    
  }
      
  


  return 0;
}