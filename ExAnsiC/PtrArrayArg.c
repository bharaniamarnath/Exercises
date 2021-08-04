#include <stdio.h>
#include <ctype.h>

#define MAXN 10

void ptrArrayChk(int *s){
  int i, j;
  for(i = 0; i < MAXN; i++)
    if(s[i] == ' ')
      for(j = i; j < MAXN && s[j] != '\0'; j++)
	s[j] = s[j + 1];
}

int main(void){
  int s[MAXN];
  int c, i;
  for(i = 0; i < MAXN && (c = getchar()) != '\n'; i++)
    s[i] = c;
  if(c == '\n')
    s[i++] = '\0';
  ptrArrayChk(s);
  for(i = 0; i < MAXN && s[i] !='\0'; i++)
    printf("%c",s[i]);
  printf("\n");
  return 0;
}