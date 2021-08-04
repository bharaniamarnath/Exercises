#include <stdio.h>

#define MAXN 100
#define BUFSIZE 100

int bufp = 0;
char buf[BUFSIZE];

int getch(void);
void ungetch(int c);

int getch(void){
  if(bufp > 0)
    return buf[--bufp];
  else
    getchar();
}

void ungetch(int c){
  if(bufp >= BUFSIZE)
    printf("Limit exceeded");
  else
    buf[bufp++] = c;
}

int main(void){
  char s[MAXN];
  int i, c;
  while((s[i++] = c = getch()) && c != '\n')
    ;
  if(c != '\n')
    ungetch(c);
  s[i++] = '\0';
  printf("%s",s);
}