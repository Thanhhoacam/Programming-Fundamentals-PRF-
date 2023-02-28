#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d",&n);
	int binarynumber=0;
	int p=0;
	while (n>0){
		binarynumber+=(n%2)*(pow(10,p));
		p++;
		n/=2;
	}
	printf ("%d",binarynumber);
	return 0;
}
