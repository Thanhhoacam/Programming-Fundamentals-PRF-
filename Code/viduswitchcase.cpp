#include<stdio.h>
void Time(int a){
	switch(a){
		case 1:
			printf("Sunday");break;
		case 2:
			printf("Monday");break;
		case 3:
			printf("Tuesday");break;
		case 4:
			printf("Wednesday");break;
		case 5:
			printf ("Thursday");break;
		case 6:
			printf("Friday");break;
		case 7:
			printf("Saturday");break;
	}
}
int main(){
	int a;
	scanf ("%d",&a);
	Time (a);
	return 0;
}
