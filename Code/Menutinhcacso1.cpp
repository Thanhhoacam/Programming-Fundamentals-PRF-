#include <stdio.h>
void giaithua (int n ){
	if (n<=0){
		printf ("Nhap lai so khac!!!");
	}
	else{
		int factorial =1;
		for (int i=1;i<=n;i++){
			factorial=factorial*i;
		}
		printf ("Ket qua la: %d",factorial);
	}

}
int check(int x){
	for (int i=2;i<=x/2;i++){
		if (x%i==0){
			return 0;
		}
	}
	return 1;
}
void Ngto (int n){
	if (n<2){
		printf ("Nhap lai so khac!!!");
	}
	else{
		for (int i=2;i<=n;i++){
			if (check(i)==1){
				printf ("%d\t",i);
			}
		}
	}
}
int Check2(int x){
	int sum=0;
	for(int i=1;i<=x/2;i++){
		if(x%i==0)
			sum=sum+i;
	}
	if(sum==x){
		return 1;
	}
	else{ 
		return 0;
	}
}

void Perfect(int n){
	if (n<=0){
		printf ("Nhap lai so khac!!!");
	}
	for(int i=1;i<=n;i++){
		if(Check2(i)==1)
			printf("%d\t",i);
	}
}
int Fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (int i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main(){
	while (1){
		printf ("\n======Program======\n");
		printf ("1. Giai thua\n");
		printf ("2. So nguyen to\n");
		printf ("3. So hoan hao\n");
		printf ("4. Day Fibonacci\n");
		printf ("5. Exit\n");
		int k;
		printf ("Enter your choice: ");
		scanf ("%d",&k);
		switch(k){
			case 1:
				int n;
				printf ("Nhap so nguyen duong n: ");
				scanf ("%d",&n); 
				giaithua(n);break;	
			case 2: 
				int m;
				printf ("Nhap so nguyen duong n: ");
				scanf ("%d",&m);
				Ngto(m);break;
			case 3:	
				int e;
				printf ("Nhap so nguyen duong n: ");
				scanf ("%d",&e);
				Perfect(e);break;
			case 4:
				int f;
				printf ("Nhap so nguyen duong n: ");
				scanf ("%d",&f);
    			printf(" Day so Fibonacci: \n");
   				for (int i = 0; i < f; i++) {
        		printf("%d ", Fibonacci(i));};break;	
			case 5: return 0;	
		}	
	}
}
			
		


		
