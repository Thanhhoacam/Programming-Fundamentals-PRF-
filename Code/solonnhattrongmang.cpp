#include <stdio.h>
void Nhapmang(int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap phan tu thu a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
}
void Xuatmang(int a[],int n){
	for (int i=0;i<n;i++){
		printf("Phan tu thu a[%d] = %d\n",i,a[i]);
	}
}
int Max(int a[],int n){
	int Max=0;
	for (int i=0;i<n;i++){
		if (Max<a[i]){
			Max=a[i];
		}
	
	}
	return Max;
}
int main (){
	int a[100];
	int n;
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf ("So lon nhat trong mang la: %d",Max(a,n));
}
