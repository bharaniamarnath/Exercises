#include <stdio.h>

double d[] = {1.2, 1.5, 1.8};

int getCount(){
  return sizeof(d)/sizeof(d[0]);
}

int main(void){
  int count = sizeof(d)/sizeof(d[0]);
  printf("%d\n",count);
  printf("%d\n",getCount());
  return 0;
}