#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000
#define ALLOCSIZE 10000

char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

//void qsort(char *lineptr[], int left, int right);

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

int readlines(char *lineptr[],int maxlines){
  int len, nlines;
  char *p, line[MAXLEN];
  nlines = 0;
  while((len = getLine(line, MAXLEN)) > 0)
    if(nlines >= maxlines || (p = alloc(len)) == NULL)
      return -1;
    else{
      line[len-1] = '\0';
      strcpy(p,line);
      lineptr[nlines++] = p;
    }
  return nlines;
}

void writelines(char *lineptr[], int nlines){
  int i;
  for(i = 0; i < nlines; i++)
    printf("%s\n", lineptr[i]);
}

int getLine(char s[], int lim){
  int c, i;
  i = 0;
  while(--lim > 0 && (c = getchar()) != '.' && c != '\n')
    s[i++] = c;
  if(c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

int main(){
  int nlines;
  if((nlines = readlines(lineptr, MAXLINES)) >= 0){
    //qsort(lineptr,0,lines-1);
    writelines(lineptr,nlines);
    return 0;
  }
  else{
    printf("Error: Input sort limit exceeded\n");
    return 1;
  }
  return 0;
}