#include <stdio.h>
#include<math.h>
void quadration (float a, float b, float c){
	float delta=b*b-4*a*c;
	if (delta>0){
		float x1=(float)(-b+sqrt(delta))/(2*a);
		float x2=(float)(-b-sqrt(delta))/(2*a);
		printf ("Pt co 2 nghiem x1= %.2f va x2= %.2f",x1,x2);
	}
	else if (delta==0){
		float x=(float)(-b)/(2*a);
		printf ("Pt co 1 nghiem kep x= %.2f",x);
	}
	else {
		printf ("Phuong trinh vo nghiem!!!");
	}
}
void bank (float deposits, float interest, int month ){
	if (deposits<=0||interest>=0.11||interest<0||month<=0){
		printf ("Nhap lai!!!");
	}
	else{
		float depint=(float) deposits*interest*month;
		float total= (float)deposits+depint;
		printf ("Total amount received: %.2f",total);
	}
}
int main(){
	while(1){
		printf ("\n\nMENU\n");
		printf ("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n\n");
		printf ("1- Quadratic equation\n");
		printf ("2- Bank deposit problem\n");
		printf ("3- Quit\n");
		int k;
		printf ("Enter Your Choice: ");
		scanf ("%d",&k);
		switch(k){
			case 1: 
				float a;
				printf ("Nhap he so a cua pt bac 2: ");
				scanf ("%f",&a);
				float b;
				printf ("Nhap he so b cua pt bac 2: ");
				scanf ("%f",&b);
				float c;
				printf ("Nhap he so c cua pt bac 2: ");
				scanf ("%f",&c);
				quadration(a,b,c);
				break;
			case 2:
				float deposits;
				printf ("Deposits (a positive number): ");
				scanf ("%f",&deposits);
				float interest;
				printf ("Deposit interest rates (a positive number <= 0.1): ");
				scanf ("%f",&interest);
				int month;
				printf ("No of deposit months (a positive number): ");
				scanf ("%d",&month);
				bank(deposits,interest,month);
				break;
			case 3: 
				return 0;
			default: break;
		}
	}
}
