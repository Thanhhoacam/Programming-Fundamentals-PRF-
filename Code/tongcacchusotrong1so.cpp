#include <stdio.h>
void sum(int n){
	int m,sum=0;
	while (n>0){
		m=n%10;
		n=n/10;
		sum=sum+m;
	}
	printf ("%d",sum);
}
int main(){
	int n;
	scanf ("%d",&n);
	sum(n);
}
