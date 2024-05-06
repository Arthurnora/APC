#include <stdio.h>

int main(){
  int x = 1;
  int y = 1;
  //int z = x + y;
  //int s;
  for(int i = 3; i <= 200; i++){
    int r = x + y;
    printf("%i + %i = %i\n", x, y, r);
    x = y;
    y = r;

  }
  

  return 0;
}