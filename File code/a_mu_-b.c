// Users are required to enter two “double” numbers ‘a’, ‘b’ using the keyboard (STDIN).
// The system displays the result of a-b with 6 decimal places.
// Below is an example of how the program will run:
// Enter the values 2.222222, 4.333333 for ‘a’ and ‘b’.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  

  
  double a, b;
  scanf("%lf%lf", &a, &b);
  double result = 1.0 / pow(a, b);
  
 
  printf("\nOUTPUT:\n");
  

	printf("%.6lf", result);

 
  return(0);
}