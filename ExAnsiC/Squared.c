#include <stdio.h>

int squared(int x);

void main(void){
  int x, y;
  for(x = 0; x < 10; x++){
    y = squared(x);
    printf("%02d squared = %03d\n", x, y);
  }
}

int squared(int x){
  return x * x;
}

// End of File