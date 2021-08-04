#include <stdio.h>

#define MAXN 5

void printArray(double p[]){
  int y;
  printf("fn o/p:\n");
  for(y = 0; y < MAXN; y++)
    printf("%lf\n",p[y]);
}

int main(void){
  double x[MAXN];
  int i = 0;
  while(i < MAXN){
    scanf("%lf",&x[i]);
    i++;
  }
  printf("o/p:\n");
  for(i = 0; i < MAXN; i++)
    printf("%lf\n",x[i]);
  printArray(x);
  return 0;
}