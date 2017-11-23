//Calculator program
#include <stdio.h>
#include <stdlib.h>
#include "userIO.h"
#include "calcFunc.h"


int main()
{
char a[20];
double value1, value2;
printf("Write ekvation (singel operation): " );
readLine(a, 20);
printf("String: %s\n", a);
int test = sscanf(a,"%lf %lf", &value1, &value2);
printf("Type: %d\n",checkCalculationType(a));
printf("Out: %d V1: %f V2: %f\n" ,test, value2, value1);

switch(checkCalculationType(a)){
  case 1:
    printf("%.2lf + %.2lf = %.2lf",value1, value2, addtion(value1, value2));
    break;
  case 2:
    printf("%.2lf - %.2lf = %.2lf",value1, value2, subtraction(value1, value2));
    break;
  case 3:
    printf("%.2lf * %.2lf = %.2lf",value1, value2, multiplication(value1, value2));
    break;
  case 4:
    printf("%.2lf / %.2lf = %.2lf",value1, value2, division(value1, value2));
    break;
}

  /*
    float num1, num2, result; //Float variables for the user input and output, used floats in case the user enters e.g. 14.7
    switch(menu) //switch statement for menu
    {
    case 1:
        printf("You entered Addition\n\n");

        printf("Enter first number: "); //User input for first number
        scanf("%f", &num1);

        printf("Enter second number: "); //User input for second number
        scanf("%f", &num2);

        printf("\n");

        result = num1 + num2; //Addition calculation

        printf("%.2f + %.2f = %.2f\n", num1, num2, result); //Addition output
        break;
    case 2:
        printf("You entered Subtraction\n\n");

        printf("Enter first number: "); //User input for first number
        scanf("%f", &num1);

        printf("Enter second number: "); //User input for second number
        scanf("%f", &num2);

        printf("\n");

        result = num1 - num2; //Subtraction calculation

        printf("%.2f - %.2f = %.2f\n", num1, num2, result); //Subtraction output
        break;
    case 3:
        printf("You entered Multiplication\n\n");

        printf("Enter first number: "); //User input for first number
        scanf("%f", &num1);

        printf("Enter second number: "); //User input for second number
        scanf("%f", &num2);

        printf("\n");

        result = num1 * num2; //Multiplication calculation

        printf("%.2f * %.2f = %.2f\n", num1, num2, result); //Multiplication Output
        break;
    case 4:
        printf("You entered Division\n\n");

        printf("Enter first number: "); //User input for first number
        scanf("%f", &num1);

        printf("Enter second number: "); //User input for first number
        scanf("%f", &num2);

        printf("\n");

        result = num1 / num2; //Division calculation

        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        break;
    default:
        printf("Enter correct number e.g 1 - 4\n"); //Outputted if the user enters a value other than 1 - 4
        break;
    }
    return 0;
    */
}
//End of code
