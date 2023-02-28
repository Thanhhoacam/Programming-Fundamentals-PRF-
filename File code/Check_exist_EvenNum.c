// Your program allows users to enter array of n integers, where n is entered by the user (n < 10).
// If all elements of the array are even numbers, the program displays to screen: “Even array of n elements” where “n” is the number of elements in the array.
// Else, the program displays to screen: “Not even array of n elements” where “n” is the number of elements in the array.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  

  int n;
  int a[100];
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++){
  	scanf("%d", &a[i]);
  }
  
  int check = 1;
  for(i = 0; i < n; i++){
  	if(a[i] % 2 == 1){
  		check = 0;
  		break;
	  }
  }
  
  
  
  printf("\nOUTPUT:\n");
 

	if(check){
		printf("Even array of %d elements", n);
	}
	else
		printf("Not even array of %d elements", n);

 
  return(0);
}