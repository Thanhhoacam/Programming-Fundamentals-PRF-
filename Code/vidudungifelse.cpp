#include<stdio.h>
void Check (float gpa ){
	if(gpa>5){
		printf ("PASS");
	}
	else{
		if (gpa<=7){
			printf ("Normal") ;
		}
		else{ 
			printf ("Fail")	;
		}
	}
}
int main(){
	float gpa;
	printf ("Nhap so diem gpa: ");
	scanf("%f",&gpa);
	Check(gpa);
	return 0;
}
