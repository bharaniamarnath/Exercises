#include <stdio.h>

int strcmpr(char *s, char *t){
  int i;
  for(i = 0; s[i] == t[i]; i++)
    if(s[i] == '\0')
      return 0;
  return s[i] - t[i];
}

int main(){
  char s[] = "Hello world";
  char t[] = "Hello world";
  int x = strcmpr(s,t);
  if(x == 0)
    printf("Match\n");
  else
    printf("Not match\n");
  return 0;
}