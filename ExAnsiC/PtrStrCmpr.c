#include <stdio.h>

int ptrstrcmpr(char *x, char *y){
  for(; *x == *y; *x++, *y++)
    if(*x == '\0')
      return 0;
  return *x - *y;
}

int main(){
  char x[] = "Hello World";
  char y[] = "HelloWorld";
  int z = ptrstrcmpr(x,y);
  if(z == 0)
    printf("Match\n");
  else
    printf("Not match\n");
  return 0;
}