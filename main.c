//Calculator program
#include <stdio.h>
#include <stdlib.h>
#include "userIO.h"
#include "calcFunc.h"


int main(){

char inputStr[20];
double value1, value2;
int choice;

printf("-----------CALCULATOR-------------\n" );
printf("Write ekvation (singel operation): " );
readLine(inputStr, 20);

if((choice = checkCalculationType(inputStr)) == 0){
  printf("Invalid sign\n");
  exit(0);
}

if(sscanf(inputStr,"%lf %lf", &value1, &value2) != 2){
  printf("Input error");
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
