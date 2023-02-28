#include<stdio.h>
void nhapmang(int a[], int n){ 
	int i;
    for(i=0;i<n;i++){ 
 		printf("Phan tu thu %d :",i);
    	scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n){
	int i;
	for(i=0;i<n;i++) {
    	printf("%d \t",a[i]);
	}
}
int ChiSoGiaTriDuongDauTien(int a[],int n) {
	int i;
 	for( i=0;i<n;i++) {
 		if(a[i]>0) return (i); 
 	}
 	return -1;
}
int main() {
  	int a[50];
	int n;
	printf("Nhap so phan tu :" );
    scanf("%d",&n);
	nhapmang(a,n);
  	xuatmang(a,n);
  	printf("\nChi so gia tri duong dau tien la: %d",ChiSoGiaTriDuongDauTien(a,n));
  	return 0;
}
