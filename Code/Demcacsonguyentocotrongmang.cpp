#include <stdio.h>
void Nhapmang (int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap phan tu thu a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
}
void Xuatmang (int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Phan tu thu a[%d] = %d\n ",i,a[i]);
	}
}
void Ngto(int a[],int n){
	int count=0;
	for (int i=0;i<n;i++){
		for(int j=1;j<=a[i];j++){
			if (a[i]%j==0){
				count++;
			}
			if (count ==2){
				printf ("Cac so nguyen to co trong mang la: %d",a[i]);
			}
		}
	}
}
int main (){
	int a[100];
	int n;
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	Ngto(a,n);
}
