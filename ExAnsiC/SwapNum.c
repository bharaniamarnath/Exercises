#include <stdio.h>

int x = 10;
int y = 20;

void swapNum(int a, int b){
  static int temp;
  temp = a;
  a = b;
  b = temp;
  x = a;
  y = b;
}

int main(void){
  printf("Simple swap\n");
  printf("Before: x = %d, y = %d\n",x,y);
  swapNum(x,y);
  printf("After: x = %d, y = %d\n",x,y);
  return 0;
}