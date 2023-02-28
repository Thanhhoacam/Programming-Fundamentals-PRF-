#include <stdio.h>
int main () {
	float a,b;
	char c;
	printf("\nNhap phep toan: ");
    scanf("%c", &c);
 
    printf("\nNhap vao 2 so a, b: ");
    scanf("%f%f", &a, &b);

	switch (c){
		case '+':
			printf ("%.2f+%.2f=%.2f",a,b,a+b);
			break;
		case '-':
			printf ("%.2f-%.2f=%.2f",a,b,a-b);
			break;
		case '*':
			printf ("%.2f*%.2f=%.2f",a,b,a*b);
			break;
		case '/':
			if (b==0){
				printf ("Khong chia duoc");
			}
		else{
			printf ("%.2f/%.2f=%.2f",a,b,a/b);
			}
			break;			
	}
	return 0;
}
