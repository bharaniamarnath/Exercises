#include <stdio.h>

#define MAXN 10

void qsort(int v[], int left, int right){
  int i, last;
  void swap(int v[], int i, int j);
  if(left  >= right)
    return;
  swap(v, left, (left + right) / 2);
  last = left;
  for(i = left + 1; i <= right; i++)
    if(v[i] < v[left])
      swap(v, ++last, i);
  swap(v, left, last);
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
} 

void swap(int v[], int i, int j){
  int temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

int main(){
  int nums[MAXN];
  int i;
  printf("Enter %d numbers:\n",MAXN);
  for(i = 0; i < MAXN; i++)
    scanf("%d",&nums[i]);
  printf("Performing quick sort...\n");
  qsort(nums, 0, MAXN - 1);
  printf("Sorted:\n");
  for(i = 0; i < MAXN; i++)
    printf("%d\t",nums[i]);
  printf("\n");
  return 0;
}