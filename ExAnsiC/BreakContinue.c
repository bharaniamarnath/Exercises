#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXL 10

int checkLen(char* l){
  return strlen(l);
}

void checkBlanks(char a[],int x){
  int i, j;
  printf("Check Break:\n");
  for(i = 0; i < x; i++){
    if(a[i] == ' ' || a[i] == '\t'){
      printf("Contains blank at position: %d\n",i);
      break;
    }
  }
  printf("Check Continue:\n");
  for(j = 0; j < x; j++){
    if(a[j] == ' ' || a[j] == '\t'){
      printf("[ ]");
      continue;
    }
    else{
      printf("%c",a[j]);
    }
  }
  printf("\n");
}

int main(void){
  char s[MAXL];
  int c, i, l;
  printf("Input [Max 10 chars]:\n");
  for(i = 0; i < MAXL && (c = getchar()) != '\n'; i++){
    s[i] = c;
  }
  if(c == '\n'){
    s[i] = '\0';
    i++;
  }
  printf("Output: %s\n",s);
  l = checkLen(s);
  printf("Length: %d\n",l);
  checkBlanks(s,l);
  return 0;
}