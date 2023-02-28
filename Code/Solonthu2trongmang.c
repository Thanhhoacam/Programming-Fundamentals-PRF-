#include<stdio.h>
int main(){
	int i;
    int arr[100];
    int n;
    int max = 0;
    int max2 = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(;n <= 0;){
    	printf("n phai > 0 \n");
        printf("Nhap lai n:");
        scanf("%d",&n);
    }    
    printf("Nhap gia tri cua mang:\n");
    for(i = 0; i < n; i++){
        printf("a[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        if(max < arr[i]) {
            max = arr[i];    
        }            
    }
	for(i = 0; i < n; i++){
        if(max == arr[i]){
            continue;
        }    
        else if(max2 < arr[i]){
        	max2 = arr[i];
        }        
    }
    printf("Gia tri lon thu 2 la :%d",max2);
    return 0;
}
