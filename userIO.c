#include "userIO.h"
/*loop thru input array and check for ekvation signs, remove ekvationsign to get functinal reading with sscanf*/
int checkCalculationType(char input[]) {
  for(int i = 0; i < strlen(input); i++){
    if(input[i] == '+'){
      input[i] = ' ';
      return 1;
    }
    else if(input[i] == '-'){
      input[i] = ' ';
      return 2;
    }
    else if(input[i] == '*'){
      input[i] = ' ';
      return 3;
    }
    else if(input[i] == '/'){
      input[i] = ' ';
      return 4;
    }
  }
  return 0;
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
