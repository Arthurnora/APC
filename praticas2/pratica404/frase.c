#include <stdio.h>

int main(){
  char frase[31];

  printf("Entre com uma frase com até 30 caracteres: ");
  scanf("%[^\n]s", frase);

  int k = 0;
  char matriz[6][5];
  for(int i=0; i<6; i++){
    for(int j=0; j < 5; j++){
      matriz[i][j] = frase[k++];
    }
  }
  printf("A frase codificada é: ");
  for(int j=0; j < 5; j++){
    for(int i=0; i<6; i++){
      printf("%c", matriz[i][j]);
    }
  }  
  printf("\n");
  
  return 0;
}