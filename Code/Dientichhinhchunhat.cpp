#include <stdio.h>
int main(){
	float a,b;
	printf ("Nhap chieu dai cua hinh chu nhat: ");
	scanf ("%f",&a);
	printf ("Nhap chieu rong cua hinh chu nhat: ");
	scanf ("%f",&b);
	float s,p=0;
	s=a*b;
	p=(a+b)*2;
	printf ("Chu vi hinh chu nhat la: %.2f\n",p);
	printf ("Dien tich hinh chu nhat la: %.2f",s);
	return 0;
}
