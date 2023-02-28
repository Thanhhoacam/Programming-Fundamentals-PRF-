// Your program allows users to enter a positive integer ‘a’ (a < 20).
// The program prints out a square filled with character ‘*’. The edge of the square has ‘a’ characters.
// Below is an example of how the program will run:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  
  int n;
  scanf("%d", &n);
  
  printf("\nOUTPUT:\n");
  

	int i, j;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n; j++){
			printf("*");
		}
		printf("\n");
	}
	for(j = 0; j < n; j++){
			printf("*");
		}


  return(0);
}