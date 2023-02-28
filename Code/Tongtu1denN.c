#include<stdio.h>
void Tong(){
	int i, n;
    long S;
    S = 0;
    i = 1;
    printf("Nhap N: ");
    scanf("%d", &n);
	while(i <= n)
    {
        S = S + i;
        i++;
    }
    printf("Tong 1 + 2 + ... + %d la: %ld ", n, S);
}
int main (){
	Tong();  
	return 0;
}
