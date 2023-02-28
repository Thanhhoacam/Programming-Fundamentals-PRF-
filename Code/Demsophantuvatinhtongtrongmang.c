#include<stdio.h>
int main(){
	int a[100];
	int n;
 	printf("Nhap so phan tu cua mang: ");
 	scanf("%d", &n);
 	int i;
 	for ( i = 0; i < n; i++){
  		printf("Nhap phan tu thu %d: ", i + 1);
  		scanf("%d", &a[i]);
 	}
 	int dem=0;
 	int s=0;
 	for (i = 0; i < n; i++){
 		if (a[i]>0){
 			dem=dem+1;
 			s=s+a[i];
		}
	}
	printf ("\nSo phan tu duong trong day: %d ",dem);
	printf ("\nTong phan tu duong trong day: %d",s);
 	
 	return 0;
}
