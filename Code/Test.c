#include <stdio.h>
#include <math.h>
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
int TongChan(int a[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
		if (a[i]%2==0){
			sum=sum+a[i];
		}
	}
	return sum;
}
void GiamDan(int a[], int n){
    int tg;
    for(int i = 0; i < n ; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                
                a[j] = tg;        
            }
        }
        printf (" %d\t",a[i]);
	}
}
int soNguyenTo(int soA) {
	if (soA < 2){
		return 0;
	}
	else if (soA>2){
		if (soA % 2 == 0)  {
			return 0;
		}
		for (int i = 3; i < sqrt((float)soA); i += 2)  {
			if (soA%i == 0)  {
				return 0;
			}
		}
	}
	return 1;
}

int main (){
	while (1){
		printf ("\n======Program======\n");
		printf ("1. Tinh tong so chan\n");
		printf ("2. Sap xep mang\n");
		printf ("3. Kiem tra so sieu nguyen to\n");
		printf ("4. Exit\n");
		int k;
		printf ("Enter your choice: ");
		scanf ("%d",&k);
		int a[100];
		int n;
		if (k==1){
			printf ("Nhap so phan tu cua mang:");
			scanf ("%d",&n);
			Nhapmang(a,n);
			Xuatmang(a,n);
			printf ("Tong cac so chan la: %d",TongChan(a,n));
		}
		else if (k==2){
			printf ("Nhap so phan tu cua mang:");
			scanf ("%d",&n);
			Nhapmang(a,n);
			Xuatmang(a,n);
			GiamDan(a, n);
		}
		else if (k==3){
			int SoA;
			printf("Nhap n:");
			scanf("%d", &SoA);
			int temp = SoA;
			temp /= 10; 
			if (soNguyenTo(temp) == 1){
				printf("So %d la so sieu nguyen to", SoA);
			}
			else{
			printf("So %d khong phai la so sieu nguyen to",SoA);
			}
		}
		else {
			return 0;
		}
	}
}


