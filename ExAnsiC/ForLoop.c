#include <stdio.h>
#include <stdlib.h>

#define MAXL 10

int main(void){
  int i, c;
  char s[MAXL];
  for(i=0; i < MAXL && (c = getchar()) != '\n'; i++)
    s[i] = c;
  if(c == '\n'){
    s[i] = '\0';
    i++;
  }
  printf("%s\n",s);
}