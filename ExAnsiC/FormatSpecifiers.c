#include <stdio.h>

int main(){
  double x = 0.00;
  if(x == 0.00){
    printf("X is empty. Enter some value:\n");
    scanf("%lf",&x);
  }
  else{
    printf("%lf\n",x);
  }
  printf("Using format specifier - g\n");
  printf("%g\n",x);
  return 0;
}