#include <stdio.h>
#include <math.h>

int main(){
  //declare
  double x = 42.9401;
  int y = (int) x;
  int z = 75;
  double a = (double) z;
  int b = (int) (x * z);
  int c = (int) (((int) x) * z);
  long int d = 9999999999;
  short int e = 32767;
  unsigned short int f = 65535;
  unsigned long int g = d * e;
  double h = 38.91;
  int i = 7;
  double j = pow(2, i) + (h + z) * (e / h);
  //print
  printf("%d\n",y);
  printf("%.3f\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  printf("%ld\n",d);
  printf("%d\n",e);
  printf("%d\n",f);
  printf("%ld\n",g);
  printf("%.3f\n",j);
}