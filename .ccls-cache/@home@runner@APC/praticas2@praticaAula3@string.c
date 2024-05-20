#include <stdio.h>
#include <string.h>

int main(){
  char nome [20];


  printf("Entre com seu nome: ");
  scanf("%[^\n]s", nome);

  printf("Olá %s!\n", nome);


  char mensagem[30];
  strcpy(mensagem, "Olá");
  printf("%s\n", mensagem);
  strcat(mensagem, "Mundo!");
  printf("%s\n", mensagem);
  int tamanho = strlen(mensagem);
  printf("O tamanho da sua string é %i\n", tamanho);
  printf("As string nome e mensagem são iguais? %i\n", strcmp(nome, mensagem));






  return 0;
}