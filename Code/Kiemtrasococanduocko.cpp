#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=sqrt(n);i++){
		if (i*i==n){
			printf ("Yes");
		}
	}
	return 0;
}
