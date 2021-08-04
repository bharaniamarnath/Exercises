#include <stdio.h>

#define ALLOCSIZE 10

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){
  if(allocbuf + ALLOCSIZE - allocp >= n){
    allocp += n;
    return allocp - n;
  }
  else
    return 0;
}

void afree(char *p){
  if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
    allocp = p;
}

int main(){
 char s[] = "hello world";
 printf("%d\n",sizeof(allocbuf));
 return 0;
}