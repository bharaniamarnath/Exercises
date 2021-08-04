#include <stdio.h>

#define MAXN 10

int main(void){
  char s[MAXN];
  int c, i;
  while(i < 10 && (s[i++] = c = getchar()) && c != '\n')
    ;
  s[i++] = '\0';
  printf("%s\n",s);
  printf("%c\n",s[0]);
}