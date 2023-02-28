#include <stdio.h>
int main (){
	float a,b,c;
	scanf ("%f%f%f",&a,&b,&c);
	float TB=(a+b+c)/(float)3;
	if (TB>=8&&TB<=10){
		printf ("Gioi");
	}
	else if (TB>=6.5&&TB<8){
		printf ("Kha");
	}
	else if (TB>=4&&TB<6.5){
		printf ("Trung binh");
	}
	else if (TB>=0&&TB<4){
		printf ("Yeu");
	}
	return 0;
}
