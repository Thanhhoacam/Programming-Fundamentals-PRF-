#include <stdio.h>
#define MAX 1000
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
void Tbc (int a[],int n){
	int count=0;
	int sum=0;
	float tbc=0;
	int count1=0;
	for (int i=0;i<n;i++){
		if (a[i]%2==0){
			count1=count1+1;
		}
		if (a[i]%2!=0){
			sum=sum+a[i];
			count=count+1;
		}
		tbc=(float)sum/count;
	}
	if (count1==n){
		printf ("Khong co so le");	
	}
	else{
		printf("Ket qua: %.2f",tbc);
	}		
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
int BinarySearch(int a[], int n,int b){
	int left =0, right=n-1;
	int mid;
	while (left<=right){
		mid=(left+right)/2;
		if (a[mid]==b){
			return mid;
		}
		if (b>a[mid]){
			left=mid+1;
		}
		else {
			right=mid-1;
		}	
	}
	return -1;
}
int main (){
	int x,y,v,z,n,a[MAX],b;
	printf ("Nhap so phan tu cua mang: ");
	scanf ("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	Tbc(a,n);
	printf ("\nNhap so muon tim kiem: ");
	scanf ("%d",&x);
	search(a,n,x);
	printf ("\nNhap vi tri can xoa: ");
	scanf ("%d",&y);
	remove(a,n,y);
	printf ("\nNhap vi tri muon them so: ");
	scanf ("%d",&z);
	printf ("\nNhap so muon them: ");
	scanf ("%d",&v);
	add(a,n,v,z);
	printf("\nMang sau khi them:\n");
    Xuatmang(a, n);
    Tangdan(a,n);
    printf ("Nhap phan tu muon tim:");
    scanf ("%d",&b);
    int mid=BinarySearch(a,n,b);
    if (mid==-1)
    	printf ("Khong tim thay");
    else
    	printf ("Tim thay phan tu tai vi tri %d",mid);
}


