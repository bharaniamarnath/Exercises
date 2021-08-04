#include <stdio.h>
#include <string.h>

int main(void){
  char s[] = "Hello";
  int slen = strlen(s);
  int i;
  for(i = 0; i < slen; i++){
    printf("%c\t",s[i]);
  }
  printf("\n");
  return 0;
}