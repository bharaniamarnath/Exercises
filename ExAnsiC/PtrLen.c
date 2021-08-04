#include <stdio.h>
#include <stdlib.h>

int strLength(char *s){
  char *p = s;
  while(*p != '\0')
    p++;
  return p - s;
}

int main(void){
  char *s = "Hello World!";
  int x = strLength(s);
  printf("%d\n",x);
  return 0;
}