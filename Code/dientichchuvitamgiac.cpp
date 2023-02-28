#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	float p=(a+b+c)/(float)2;
	if (a+b>c&&a+c>b&&b+c>a){
		printf ("%d",a+b+c);
		printf ("\n%0.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
		
	}
	else {
		printf ("No");
	}
	return 0;
}
