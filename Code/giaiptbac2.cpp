#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	int Del=b*b-4*a*c;
	if (Del>0){
		float x1= (-b+sqrt(Del))/(float)2*a;
		float x2= (-b-sqrt(Del))/(float)2*a;
		printf ("%f%f",x1,x2);
	}	
	else if (Del==0){
		float x=-b/(float)2*a;
		printf ("%f",x);
	}	
	else {
		printf ("No");
	} 
	return 0;
}
