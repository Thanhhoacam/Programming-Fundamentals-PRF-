#include <stdio.h>
int main (){
	int a,b;
	char c;
	printf ("Nhap vao phep tinh: ");
	scanf ("%c",&c);
	printf ("Nhap vao 2 so a,b: ");
	scanf ("%d%d",&a,&b);
	switch (c){
		case '+':
			printf ("%d",a+b);
			break;
		case '-':
			printf ("%d",a-b);	
			break;
		case '*':
			printf ("%d",a*b);
			break;
		case '/':
			printf ("%d",a/b);	
			break;	
	}
	return 0;
}
