#include <stdio.h>

int main(void){
  int x = 0, y = 1, z = 3;
  int *ptr;
  int *pinc;
  ptr = &x;
  y = *ptr;
  printf("%d\n",y);
  pinc = &z;
  x = *pinc + 5;
  printf("%d\n",x);
  *pinc += 1;
  x = *pinc;
  printf("%d\n",x);
  x = x + (*pinc)++;
  printf("%d\n",x);
  return 0;
}