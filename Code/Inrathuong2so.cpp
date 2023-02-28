#include <stdio.h>
int main (){
	int a,b;// Nhap a va b bat buoc a lon hon b
	int imax=0;
	scanf ("%d%d",&a,&b);
	if (a%b==0){
		printf ("%d",b);
	}
	else{
		for (int i=2;i<=a;i++){
			if (a%i==0&&b%i==0){
				printf ("%d",i);
			}
		}
	}
	
	return 0;
}
