#include <stdio.h>
#include <math.h>
int main (){
	int x,n;
	int s=0;
	scanf ("%d%d",&x,&n);
	for (int i=1;i<=n;i++){
		s=s+(pow(x,i)/i);
	}
	printf ("%d",s);
	return 0;
}
