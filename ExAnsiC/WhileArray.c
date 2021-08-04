#include <stdio.h>
#define MAXN 10

int chtoi(char s[]){
  int i, n, sign;
  for(i = 0; isspace(s[i]); i++)
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if(s[i] == '+' || s[i] == '-')
    i++;
  for(n = 0; isdigit(s[i]); i++)
    n = 10 * n + (s[i] - '0');
  return sign * n;
}

int main(void){
  char s[MAXN];
  int c, i;
  i = 0;
  while(i < MAXN && (c = getchar()) != '\n')
    s[i++] = c;
  if(c == '\n'){
    s[i] = '\n';
    i++;
  }
  s[i] = '\0';
  int x = chtoi(s);
  printf("%d\n", x);
  return 0;
}