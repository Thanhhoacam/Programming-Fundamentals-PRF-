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
int VTMin (int a[],int n){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;			
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
	printf ("Vi tri so nho nhat la: %d",VTMin(a,n));
}
