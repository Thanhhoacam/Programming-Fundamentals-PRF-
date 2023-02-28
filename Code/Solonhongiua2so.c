#include<stdio.h>
void solonnhat(int a,int b) {
	if(a>b){
		printf("So lon nhat la ; %d\n",a);	
	}
	else{
		printf("So lon nhat la: %d\n",b);
	}
}
int main(){
	int a,b;
	printf("Nhap a va b\n");
	scanf("%d %d",&a,&b);
	solonnhat(a,b);
	return 0;
}


