/*6. Faça um programa em C que converta um valor qualquer em gigabytes para um valor em bytes (1GB = 1024³Bytes) */
#include <stdio.h>
#include <math.h>

int main(){
  long int bytes = 1024 * 1024 * 1024;
  int gigabytes = 0;
  long double gigabytes_float = gigabytes * bytes;
  

  printf("Digite o valor em gigabytes: ");
  scanf("%i", &gigabytes);
  gigabytes_float = gigabytes * bytes;
  
  printf("O valor em bytes é: %.2Lf\n", gigabytes_float);
  printf("%i gigabytes equivale a %.0Lf bytes\n", gigabytes, gigabytes_float);



  
  return 0;
}