//Calculator program
#include <stdio.h>
#include <stdlib.h>
#include "userIO.h"
#include "calcFunc.h"


int main()
{

char a[20];
double value1, value2;
int choice;

printf("Write ekvation (singel operation): " );
readLine(a, 20);
choice = checkCalculationType(a);

int test =sscanf(a,"%lf %lf", &value1, &value2);
if(test != 2){
  printf("input error");
  exit(0);
}
switch(choice){
  case 1:
    printf("%.2lf + %.2lf = %.2lf\n",value1, value2, addtion(value1, value2));
    break;
  case 2:
    printf("%.2lf - %.2lf = %.2lf\n",value1, value2, subtraction(value1, value2));
    break;
  case 3:
    printf("%.2lf * %.2lf = %.2lf\n",value1, value2, multiplication(value1, value2));
    break;
  case 4:
    printf("%.2lf / %.2lf = %.2lf\n",value1, value2, division(value1, value2));
    break;
  }
}
