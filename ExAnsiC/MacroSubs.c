#include <stdio.h>

#define max(A, B) ((A) > (B) ? (A) : (B))

int main(){
  int x = 29;
  int y = 25;
  int z = max(x, y);
  printf("%d\n",z);
  return 0;
}