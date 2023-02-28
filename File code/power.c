// Users are required to enter a “double” number x using the keyboard (STDIN).
// Please print out the result of 4*x4 with 4 decimal places.
// Below is an example of how the program will run:
// Enter the value 1.555555 for ‘x’.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  printf("enter your number: ");
	double x;
	scanf("%lf", &x);
	double result = 4 * x * x * x * x;

  
  printf("\nOUTPUT:\n");
	printf("%.4lf", result);
  

  printf("\n");
  
  return(0);
}