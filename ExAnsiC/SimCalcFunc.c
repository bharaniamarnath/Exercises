#include <stdio.h>
#include "scalc.h"

extern double num1;
extern double num2;
extern int choice;

void doCalc(){
  switch(choice){
    case 1:
      printf("%.2lf\n", add(num1, num2));
      break;
    case 2:
      printf("%.2lf\n", sub(num1, num2));
      break;
    case 3:
      printf("%.2lf\n", mul(num1, num2));
      break;
    case 4:
      if(num1 == 0)
	printf("Zero divisor error");
      else
	printf("%.2lf\n", div(num1, num2));
      break;
    default:
      printf("Wrong choice\n");
      break;
  }
}

static double add(double n1, double n2){
  return (n1 + n2);
}

static double sub(double n1, double n2){
  return (n1 > n2) ? (n1 - n2) : (n2 - n1);
}

static double mul(double n1, double n2){
  return (n1 * n2);
}

static double div(double n1, double n2){
  return (n1 / n2);
}