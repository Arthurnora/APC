#include <stdio.h>

int main(){
  unsigned long int x = 1;
  unsigned long int y = 1;
  //int z = x + y;
  //int s;
  for(int i = 3; i <= 200; i++){
    unsigned long int r = x + y;
    printf("%li + %li = %li\n", x, y, r);
    x = y;
    y = r;

  }
  

  return 0;
}