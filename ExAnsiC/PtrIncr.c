#include <stdio.h>

int strLength(char *s){
  char *p = s;
  while(*p != '\0')
    p++;
  return p - s;
}

int main(){
  char *s = "hello world";
  int i = 0;
  printf("%c\n",*(s+1));
  int l = strLength(s);
  printf("%d\n",l);
  while(i < l){
    printf("%c",*(s+i));
    i++;
  }
  printf("\n");
  return 0;
}