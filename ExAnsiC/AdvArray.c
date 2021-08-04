#include <stdio.h>

#define MAXN 10

int arr[MAXN];
int currp = -1, lastp = -1;

int push(int val){
  if(currp >= 10){
    printf("Unable to push element %d after position %d\n", val, currp);
    printf("Array limit exceeded. MAX: %d\n",MAXN);
  }
  else{
    printf("Pushing element %d after position %d\n", val, currp);
    arr[++currp] = val;
    ++lastp;
  }
}

int pop(){
  if(lastp < 0){
    printf("Position out of limit\n");
  }
  else{
    printf("Popping element %d at position %d\n", arr[lastp], lastp);
    arr[lastp] = '\0';
    lastp--;
    currp = lastp;
  }
}

int main(void){
  int x;
  push(10);
  //pop();
  //pop();
  push(20);
  push(30);
  push(40);
  //pop();
  //pop();
  push(50);
  push(60);
  //pop();
  push(70);
  push(80);
  push(90);
  push(100);
  push(110);
  push(120);
  for(x = 0; x <= 10 && arr[x] != '\0'; x++){
    printf("%d\n",arr[x]);
  }
}