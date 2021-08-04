#include <stdio.h>
#include <string.h>

#define MAXL 10

void intochar(int n, char s[]){
  int i;
  i = 0;
  do{
    printf("Character %d: %c\n",i,s[i]);
    i++;
  }while(i < (n - 1));
}

int countChars(char* arr){
  return strlen(arr);
}

int main(void){
  char x[MAXL];
  int c,i;
  printf("Type something [Max 10 chars]:\n");
  for(i=0;i<MAXL && (c = getchar()) != '\n';++i){
    x[i] = c;
  }
  if(c == '\n'){
    x[i] = c;
    i++;
  }
  x[i] = '\0';
  int xlen = countChars(x);
  printf("You typed:\n%sLength:\n%d\n",x,xlen);
  intochar(xlen,x);
  return 0;
}