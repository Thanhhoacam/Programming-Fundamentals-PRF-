#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
 
  printf("Enter your string: ");

  char a[16];
  int i;
  for(i = 0; i < 16; i++){
  	a[i] = 0;
  }
  char s[2];
  int count;
  scanf("%s", s);
  count = 15;
  while(s[1] > 0){
  	a[count--] = s[1] % 2;
  	s[1] /= 2;
  }
  count = 7;
	while(s[0] > 0){
  	a[count--] = s[0] % 2;
  	s[0] /= 2;
  }

  printf("\nOUTPUT:\n");
 
for(i = 0; i < 16; i++){
	printf("%d", a[i]);
}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}