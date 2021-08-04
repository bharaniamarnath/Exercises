#include <stdio.h>

int strLength(char *s){
  int n;
  for(n = 0; *s != '\0'; s++)
    n++;
  return n;
}

int main(void){
  int l = strLength("Hello World");
  printf("%d\n", l);
  //Pointers and Arrays
  char e[] = {'a','b','c','d','e'};
  char *f = &e[3];
  printf("%c\n",*(e + 2));
  printf("%c\n", *f);
  return 0;
}