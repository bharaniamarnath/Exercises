#include <stdio.h>

#define MAXN 5

int nums[MAXN];

void pnums(){
  int i;
  for(i = 0; i < MAXN; i++)
    printf("%d\t",nums[i]);
  printf("\n");
}

void rsnums(int pos){
  int i, x, y;
  x = nums[pos];
  y = nums[pos + 1];
  for(i = pos + 1; i < MAXN; i++){
    nums[i] = x;
    x = y;
    y = nums[i + 1];
  }
  nums[pos] = '\0';
}

int main(){
  int i;
  for(i = 0; i < MAXN; i++)
    nums[i] = '\0';
  pnums();
  for(i = 0; i < MAXN; i++)
    nums[i] = (i + 1) * 10;
  pnums();
  rsnums(0);
  pnums();
  rsnums(2);
  pnums();
  rsnums(0);
  pnums();
  return 0;
}