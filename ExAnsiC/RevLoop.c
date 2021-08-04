#include <stdio.h>

#define MAXN 5

int main(){
  int i, j;
  int num1[MAXN];
  int num2[MAXN];
  for(i = 0; i < MAXN; i++){
    printf("Num #%d: ", i);
    scanf("%d", &num1[i]);
  }
  printf("Reversing...\n");
  for(i = (MAXN - 1), j = 0; i >= 0, j < MAXN; i--, j++)
    num2[i] = num1[j];
  for(j = 0; j < MAXN; j++)
    printf("#%d\t", j);
  printf("\n");
  for(j = 0; j < MAXN; j++)
    printf("%d\t", num2[j]);
  printf("\n");
  return 0;
}