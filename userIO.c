#include "userIO.h"

/*Prints out menu choices and ecpects a input*/
int menuChoice(){
  int choice;
  printf("Enter a number from the list below\n\n");

  printf("1. Addition\n"); //Calculator menu, user must enter a value from 1 - 4 for the program to work
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n\n");
  printf("Enter number: "); //User input for the calculator menu
  scanf("%d", &choice);
  printf("\n");
  return choice;
}

int checkCalculationType(char input[]) {
  for(int i = 0; i < strlen(input); i++){
    if(input[i] == '+'){
      input[i] = ' ';
      return 1;
    }
    else if(input[i] == '-'){
      input[i] = ' ';
      return 2;
      printf("Check");
    }
    else if(input[i] == '*'){
      input[i] = ' ';
      return 3;
      printf("Check");
    }
    else if(input[i] == '/'){
      input[i] = ' ';
      return 4;
      printf("Check");
    }
  }
  return 0;
}

char *getElementFromChar(char *thestring, int number) {
    char *token;
    const char s[2] = ".";
    token = strtok(thestring, s);
    for (int i=0;i<number;i++) {
      token = strtok(NULL, s);
    }
    return token;
}

/*Reads string from stdin*/
int readLine(char *a, int n){
    if(fgets(a, n, stdin)== NULL)
        return 0;
    if(!removeNewLine(a))
        skipLine();
    return 1;
}

/*Removes junk from buffert*/
void skipLine(void){
	int i;
	while((i = getchar()) != '\n' && EOF);
}

/*Checks if second last character is newline and replace it with NULL*/
int removeNewLine(char a[]){
    int i = strlen(a)-1;
    if(a[i] == '\n'){
        a[i] = '\0';
        return 1;
    }
    return 0;
  }
