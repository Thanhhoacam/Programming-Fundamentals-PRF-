#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int m=n;
	for (;m>0;){
		n=m%10;
		m=m/10;
		printf ("%d",n);
	}
	
	return 0;
}
