#include <stdio.h>

int main(void){
  int x;
  for(x = 10; x >= -20; x -= 2)
    printf("%02d\n", x);
  return 0;
}
