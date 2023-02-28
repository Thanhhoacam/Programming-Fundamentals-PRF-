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
void VTSLN(int a[],int n){
	for (int i=0;i<n;i++){
		if (a[i]>a[i+1]){
			printf ("Vi tri so lon nhat la: %d ",i);
		}
	}
}
int main (){
	int a[100];
	int n;
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	VTSLN(a,n);
}
