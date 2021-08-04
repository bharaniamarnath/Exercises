#include <stdio.h>
#include <string.h>

int getLen(char* a){
  return strlen(a);
}

int main(){
  char s[] = "Hello World. Hello ANSIC. Hello For.";
  char d[] = "12345abcde67890";
  char m = 'l';
  char k[] = "Hello";
  int i, j, n, z;
  int p = 0, x = 0;
  int counts[p];
  for(i = 0; !isspace(s[i]); i++)
    ;
  printf("%d\n",i);
  for(i = 0; !isspace(s[i]); i++){
    printf("%d\n",i);
  }
  for(i = 0; isdigit(d[i]); i++){
    printf("%c",d[i]);
  }
  printf("\n%d\n",i);
  for(i = 0; i < getLen(s); i++){
    if(s[i] == m)
      printf("Found at %d\n", i);
  }
  for(i = 0; i < getLen(s); i++){
    for(j = i, n = 0; s[j] == k[n] && j < getLen(s) && n < getLen(k); j++, n++){
      x++;
    }
    if(x == getLen(k)){
      counts[p] = (j - x);
      p++;
      x = 0;
    }
  }
  if(p > 0){
    printf("%d matches found\n", p);
  }else{
    printf("No match found\n");
  }
  printf("Matches found at positions:\n");
  for(z = 0; z < p; z++){
    printf("%d\n",counts[z]);
  }
  return 0;
}