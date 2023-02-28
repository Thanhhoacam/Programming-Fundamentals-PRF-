#include <stdio.h>
int main (){
	int n;
	int h,m,s;
	scanf ("%d",&n);
	if (n>=0&&n<86400){
		s=n%60;
		m=((n-s)/60)%60;
		h=(n-m-s)/3600;
	}
	printf ("%0.2d:%0.2d:%0.2d",h,m,s);
	return 0;
}
