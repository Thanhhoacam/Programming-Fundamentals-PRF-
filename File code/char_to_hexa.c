// Your program should allow users to enter a character, 
// then it should display the corresponding hexadecimal representation, followed by the integer value of the number. 
// There is a space character in between the two numbers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  
  char c;
  scanf("%c", &c);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


	printf("0x%x %d", c, c);





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}