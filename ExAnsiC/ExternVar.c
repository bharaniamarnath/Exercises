#include <stdio.h>

#define MAXN 10

char s[MAXN];
int i, c;

int main(void){
  extern char s[];
  extern int i, c;
  i = 0;
  while(i < 10 && (s[i++] = c = getchar()) && c != '\n')
    ;
  if(c == '\n' && i < 10)
    s[i++] = '\0';
  else
    printf("Limit exceeded\n");
  printf("%s\n",s);
  return 0;
}