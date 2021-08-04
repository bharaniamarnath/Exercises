#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXL 15

void strCopy(char *s, char *q){
  while((*(q++) = *(s++)) != '\0')
    ;
}

int main(){
  char s[MAXL] = "Hello World";
  char q[MAXL];
  char *x = q;
  int j = 0;
  strCopy(s,q);
  while(j < MAXL){
    printf("%c",*(x+j));
    j++;
  }
  printf("\n");
  return 0;
}