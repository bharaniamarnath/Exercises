#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, r, n;
  int *nums;
  printf("Enter limit:\n");
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    r = rand() % 100 + 1;
    nums[i] = r;
  }
  for(i = 0; i < n; i++)
    printf("%d\t", nums[i]);
  printf("\n");
  return 0;
}