#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, p, s;
	printf("Nhap canh thu nhat: ");
	scanf("%f", &a);
	printf("Nhap canh thu hai: ");
	scanf("%f", &b);
	printf("Nhap canh thu ba: ");
	scanf("%f", &c);
	if ( a+b>c && b+c>a && a+c>b) {
		printf("\nDay la ba canh cua tam giac");
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\ndien tich cua tam giac la %0.2f", s);
	} else
		printf("\nDay khong phai la ba canh cua tam giac");
}
