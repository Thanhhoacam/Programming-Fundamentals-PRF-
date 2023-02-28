#include<stdio.h>
void Cons(){
	int i=0;
	while(i<5){
		printf ("%d: Hello World.\n",i);
		i++;
	}
}
int main(){
	Cons();
	return 0;
}
