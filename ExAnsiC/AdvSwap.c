#include <stdio.h>

#define ARRSZE 9

void qswap(int n[]);

void qswap(int n[]){
  int low = 0;
  int high = (ARRSZE - 1);
  int right = n[low];
  int left = n[high];
  int temp;
  while(low < high){
    if(right > left){
      temp = n[high];
      n[high] = n[low];
      n[low] = temp;
    }
    low++;
    high--;
  }
}

int main(){
  int nums[] = {53,21,67,82,30,17,6,74,49};
  int i;
  qswap(nums);
  for(i = 0; i < ARRSZE; i++)
    printf("%d\t",nums[i]);
  printf("\n");
  return 0;
}