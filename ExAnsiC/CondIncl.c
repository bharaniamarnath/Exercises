#include <stdio.h>

#define CONSN 1000

#if CONSN == 10
  #define MAXN 100
#elif CONSN == 100
  #define MAXN 1000
#else
  #define MAXN 0
#endif

#define MINN 100

#ifndef MINN
#define MINN 10
#endif

int main(){
  printf("%d\n",MAXN);
  printf("%d\n",MINN);
  return 0;
}