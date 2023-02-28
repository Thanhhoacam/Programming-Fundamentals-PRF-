#include <stdio.h>
void Nhapmang (int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap phan tu thu a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
}
void Xuatmang (int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Phan tu thu a[%d] = %d\n",i,a[i]);
	}
}
int TongLe(int a[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
		if (a[i]%2!=0){
			sum=sum+a[i];
		}
	}
	return sum;
}
int main (){
	int a[100];
	int n;
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf ("Tong cac so le la: %d",TongLe(a,n));
}
