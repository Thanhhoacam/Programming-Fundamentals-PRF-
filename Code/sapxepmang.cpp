#include<stdio.h>
void swap(int *x,int *y){
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main (){
	int x,y;
	scanf ("%d%d",&x,&y);
	swap(&x,&y);
	printf ("After swap: x=%d, y=%d",x,y);

}
		
