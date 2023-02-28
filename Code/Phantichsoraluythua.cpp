#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=2;i<=n;i++){
		int count =0;
		while (n%i==0){
			count++;
			n=n/i;
		}
		if (count){
			if (count>1) printf ("%d^%d",i,count);
			else printf ("%d",i);
			if (n>1)printf ("*");
		
		}
	}
	return 0;
}
