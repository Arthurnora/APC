#include <stdio.h>

int main(){
  char tecla;
  int digito;
  printf("Pressione uma tecla: ");
  scanf("%c %i", &tecla, &digito);
  if (tecla == 'q' || tecla == 'w' || tecla == 'e' || tecla == 'r' || tecla == 't' || tecla == 'y' || tecla == 'u' || tecla == 'i' || tecla == 'o' || tecla == 'p' || tecla == 'a' || tecla == 's' || tecla == 'd' || tecla == 'f' || tecla == 'g' || tecla == 'h' || tecla == 'j' || tecla == 'k' || tecla == 'l' || tecla == 'z' || tecla == 'x' || tecla == 'c' || tecla == 'v' || tecla == 'b' || tecla == 'n' || tecla == 'm'){
    printf("Você digitou uma letra!\n");
  } else if(tecla == '!'|| tecla == '@' || tecla == '#' || tecla == '$' || tecla == '%' || tecla == '&' || tecla == '*' ){
    printf("Você digitou um caractere especial! :O\n");
  } else if (digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7 || digito == 8 || digito == 9 || digito == 0){
    printf("Você digitou um número!\n");
  }



  return 0;
}