#include<stdio.h>
int Giaithua (){
	int n;
	printf ("Nhap vao so muon chon khac 0: ");
	scanf ("%d",&n);
	if (n<=0){
		return 0;
	}
	int s=1;
	for (int i=1;i<=n;i++){
		s=s*i;
	}
	printf ("Gia tri la:%d",s);
}
float bieuthuc (){
	int m;
	printf ("Nhap vao so muon chon khac 0: ");
	scanf ("%d",&m);
	float sum=1;
	if (m<=0){
		return 0;
	}
	for (int i=2;i<=m;i++){
		if (i%2==0){
			sum=sum+1.0/i;
		}
		else{
			sum=sum-1.0/i;
		}
	}
	printf ("Gia tri la :%.2f",sum);
}
int sum(){
	int e;
	printf ("Nhap vao so muon chon khac 0: ");
	scanf ("%d",&e);
	int a=0;
	if (e<=0){
		return 0;
	}
	while(e>0){
		a=a+e;
		e--;
	}
	printf ("Gia tri la: %d",a);
}
int main (){
	while (1){
		printf ("\n======Program======\n");
		printf("1.Factorial\n");
		printf("2.Sum Fration\n");
		printf("3.Sum until 0\n");
		printf ("4. Exit\n");
		printf("Choose a number:\n ");
		int a;
		scanf ("%d",&a);
		switch (a){
			case 1:Giaithua();break;
			case 2:bieuthuc();break;
			case 3:sum();break;
			case 4:return 0;
			default: printf ("Choose another number!!!");
		}
	}
}
