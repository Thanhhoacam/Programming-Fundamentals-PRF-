#include <stdio.h>
int main(){
	int i,j;
    int a[100];
    int n;
    printf("\nNhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    for(i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    int temp;
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
            if(a[i] < a[j]){
               	temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    printf("\nMang da sap xep la: ");
    for(i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}
