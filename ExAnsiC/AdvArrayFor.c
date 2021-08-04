#include <stdio.h>

#define MAXN 10

int nums[MAXN];

void pnums(){
  int i;
  for(i = 0; i < MAXN; i++)
    printf("%d\t",nums[i]);
  printf("\n");
}

void inums(){
  int i, c;
  for(i = 0; i < MAXN; i++){
    printf("Input #%d: ",i);
    scanf("%d",&c);
    nums[i] = c;
  }
}

void rnums(int pos){
  nums[pos] = '\0';
}

void snums(int pos){
  int i;
  for(i = pos; i < MAXN - 1; i++)
      nums[i] = nums[i + 1];
  nums[i] = '\0';
}

int main(){
  int i;
  for(i = 0; i < MAXN; i++)
    nums[i] = '\0';
  pnums();
  nums[2] = 30;
  pnums();
  inums();
  pnums();
  rnums(3);
  pnums();
  snums(3);
  pnums();
  snums(5);
  pnums();
}