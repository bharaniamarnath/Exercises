#include <stdio.h>

void doSth(int *a, int *b){
  int c = 50;
  *a = *a + c;
  *b = *b + c;
}

int main(void){
  int x = 10, y = 20;
  printf("Original val: x = %d, y = %d\n",x, y);
  doSth(&x, &y);
  printf("Modified val: x = %d, y = %d\n",x, y);
  return 0;
}