/* NOTA LEGAL! */

#include <stdio.h>
#include <string.h>

int main(){

  struct item_nota_fiscal_t {
    char nome[21];
    int quantidade;
    float valor;
    float total;
  };
  struct item_nota_fiscal_t item[5];
  for(int i = 0; i < 5; i++){

    printf("Entre com o nome do produto: ");
    scanf("%[^\n]s", item[i].nome);
    while(getchar() != '\n');

    printf("Entre com a quantidade do produto: ");
    scanf("%i", &item[i].quantidade);
    while(getchar() != '\n');

    printf("Entre com o valor unitário do produto: ");
    scanf("%f", &item[i].valor);
    while(getchar() != '\n');

    item[i].total = item[i].quantidade * item[i].valor;
  }
  
  printf("\nN O T A   L E G A L\n");
  printf("Item               Qtd    Valor  Total\n");
  for(int i = 0; i < 5; i++){
    printf("%-14s  %03i %7.2f %03f\n", item[i].nome, item[i].quantidade, item[i].valor, item[i].total);
  }
  

  


  return 0;
}