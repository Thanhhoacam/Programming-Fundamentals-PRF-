#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void Nhapmang(int a[],int n){
	for (int i=0;i<n;i++){
		printf ("Nhap phan tu thu a[%d]: ",i);
		scanf ("%d",&a[i]);
	}
}
//void InputPointer(int *a,int n){
//	for (int i=0;i<n;i++){
//		*(a+i)=rand()%10;
//	}
//}
//void InputManual(int *a,int n){
//	for (int i=0;i<n;i++){
//		printf ("A[%d] = ",i);
//		scanf("%d",a+i);
//	}
//}
void Xuatmang(int a[],int n){
	for (int i=0;i<n;i++){
		printf("Phan tu thu a[%d] = %d\n",i,a[i]);
	}
}
void add(int a[],int n,int v,int z){	
	if(n >= MAX){
        return;
    }
    if(z < 0){
        z = 0;
    }
    else if(z > n){
        z = n;
    }
    for(int i = n; i > z; i--){
        a[i] = a[i-1];
    }
    a[z] = v;
    ++n;
}
void search(int a[],int n,int x){
	for (int i=0;i<n;i++){
		if (a[i]==x){
			printf ("So %d o vi tri %d",x,i);
		}
	}
}
void remove(int a[],int n,int y){
	if(y >= n){
        printf ("Nhap lai so khac");
    }
    else if (y<0){
    	printf ("Nhap lai so khac");
    }
    else{
		for(int i = y; i < n-1; i++){
        	a[i] = a[i+1];
    	}
    	n--;
    	for(int i = 0; i < n; i++){
        	printf("%d \t",a[i]);
		}
	}
}
void print(int a[], int n){
	for (int i=0;i<n;i++){
		printf ("\nSo cac phan tu trong mang la: %d",a[i]);
	}
}
void Tangdan(int a[], int n){
    int tg;
    for(int i = 0; i < n ; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
        printf (" %d\t",a[i]);
	}
}
void Giamdan(int a[], int n){
    int tg;
    for(int i = 0; i < n ; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
        printf (" %d\t",a[i]);
	}
}
int main (){
	int x,y,v,z,n,a[MAX],b,c;
	printf ("Nhap so phan tu cua mang: ");
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	while(1){
		printf("\n\n************************************");
		printf("\n1 - Add a value");
		printf("\n2 - Search a value");
		printf("\n3 - Remove a value");
		printf("\n4 - Print out the array");
		printf("\n5 - Sort the array in ascending order");
		printf("\n6 - Sort the array in descending order");
		printf("\n************************************");
		printf("\n\nEnter your choice: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				printf ("\nNhap vi tri muon them so: ");
				scanf ("%d",&z);
				printf ("\nNhap so muon them: ");
				scanf ("%d",&v);
				add(a,n,v,z);
				printf("\nMang sau khi them:\n");
				Xuatmang(a, n);
				break;
			case 2:
				printf ("\nNhap so muon tim kiem: ");
				scanf ("%d",&x);
				search(a,n,x);
				break;
			case 3:
				printf ("\nNhap vi tri can xoa: ");
				scanf ("%d",&y);
				remove(a,n,y);
				break;
			case 4:
				print(a,n);
				break;
			case 5:
				printf("\nMang sau khi sap xep la: ");
				Tangdan(a,n);
    			break;
    		case 6:
    			printf("\nMang sau khi sap xep la: ");
				Giamdan(a,n);
				break;
			default: return 0;		
		}
	}
}
