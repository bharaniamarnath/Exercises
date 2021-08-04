#include <stdio.h>
#define MAXL 10

int getLine(char s[], int l);

int getLine(char s[], int lim){
  int i, c;
  i = 0;
  while(--lim > 0 && (c = getchar()) != '\n'){
    s[i++] = c;
  }
  if(c == '\n'){
    s[i++] = c;
  }
  s[i] = '\0';
  return i;
}
int main(){
  char s[MAXL];
  int x;
  int t = getLine(s,MAXL);
  if(t > 0){
    printf("%s",s);
    for(x = 0; x < t; x++)
      printf("%d\n",(10 * x + (s[x] - '0')));
  }
  return 0;
}