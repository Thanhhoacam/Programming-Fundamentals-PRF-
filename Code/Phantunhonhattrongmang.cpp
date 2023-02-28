#include <stdio.h>
void Nhapmang(int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap phan tu thu a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
}
void Xuatmang(int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Phan tu thu a[%d] = %d\n",i,a[i]);
	}
}
int Min (int a[],int n){
	int min=0;
	for (int i=0;i<n;i++){
		if (a[i]<a[i+1]){
			min=a[i];
		}
	}
	return min;
}
int main (){
	int a[100];
	int n;
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf ("Phan tu nho nhat trong mang la: %d",Min(a,n));
}
