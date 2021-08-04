#include <stdio.h>

void swap(int *px, int *py){
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

int main(void){
  int x = 5, y = 3;
  printf("x = %d, y = %d\n", x, y);
  printf("swapping...\n");
  swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);
  return 0;
}