#include <stdio.h>

void addSthToVal(int a, int b){
  int z = 10;
  a = a + z;
  b = b + z;
  printf("Fn passed value of X: %d, and Y: %d\n", a, b);
}

int main(void){
  int x = 10, y = 20;
  addSthToVal(x, y);
  printf("Orgnl value of X: %d, and Y: %d in main\n",x, y);
  return 0;
}