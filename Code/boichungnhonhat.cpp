#include <stdio.h>
int main (){
	int a,b;
	scanf ("%d%d",&a,&b);
	int count=0;
	for (int i=b;i<=a*b;i++){
		if (i%a==0&&i%b==0){
			count++;
		}
		if (count==1){
			printf ("%d",i);
			break;
		}
	}
	
	
	return 0;
}
