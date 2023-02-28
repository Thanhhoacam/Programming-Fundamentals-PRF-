#include <stdio.h>
void swap(int *x, int *y){  
	int t;
   	t = *x;
   	*x = *y;
   	*y = t;
   
}
int main(){ 
	int x=5, y=7;
   	swap (&x,&y);
   	printf("After swapping x and y\n");
   	printf("x=%d, y=%d\n", x, y);
  	return 0;
}
