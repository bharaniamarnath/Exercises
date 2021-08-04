#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr, i;
  size_t num = 0;
  printf("Enter number:\n");
  scanf("%d",&num);
  //malloc
  ptr = (int *)malloc(num*sizeof(int));
  for(i = 0; i < num - 1; i++)
    printf("%d, ", ptr[i] = rand() % 100 + 1);
  printf("%d\n",ptr[i] = rand() % 100 + 1);
  //realloc
  ptr = (int *)realloc(ptr, num/=2);
  printf("num: %d\n",num);
  for(i = 0; i < num - 1; i++)
    printf("%d, ", ptr[i]);
  printf("%d\n",ptr[i]);
  return 0;
}