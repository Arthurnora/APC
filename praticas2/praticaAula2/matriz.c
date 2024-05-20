#include <stdio.h>
#define LIMITE 10



int main(){
  int numeros[LIMITE];

  for(int i = 0; i < LIMITE; i++){
    printf("Entre com o %i° número: ", i + 1);
    scanf("%i", &numeros[i]);
  }
  int numero;
  printf("Entre com o número a ser procurado: ");
  scanf("%i", &numero);
  int achei = -1

  for (int i = 0; i < LIMITE; i++){
    if (numero == numeros[i]){
      achei = i;
      break;
    }
  }
  if (achei < 0){
    printf("Número %i não foi encontrado! \n", numero);
  } else {
    printf("achei o número %i na posição %i\n", numero, achei);
  }




  return 0;
}