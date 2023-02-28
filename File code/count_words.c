#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int SCIRCLE(){
	float r, sq, PI = 3.14159;
	printf("Enter the radius of circle: ");
	scanf("%f", &r);
	sq = r * r * PI;
	if(sq > 0 ){
		printf(" Square of circle: %.3f", sq);
	}
	else{ return -1;}
}

int SQUARE(){
	double x, r; 
	printf("Enter the value of number to check: ");
	scanf("%lf", &x);
	if(x >= 0){
		r = sqrt(x);
		if( r - (int)r == 0){
			printf("%lf is a perfect square number.", x);}
		else {
			printf("%lf is not a perfect square number.", x);
			}	
		}
	else {printf("Error number !!");
		}
		return 0;
}

int COUNT(){
	char s[200];

	printf("\n Enter the string:");
	getchar();
	gets(s);
    int count = 0, i;
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;   
    }
    printf("\n Number of words in given string are: %d\n", count + 1);
}

int ARRAY(){
	int a[100], n;
	printf("Enter the munber of array");
	scanf("%d",&n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &a[i]);
	}
	printf("The square of array: ");
	for( int i = 0; i < n; i++){
		printf("%d ", a[i]*a[i]);
	}
}

int main(){
	int choice ;
	do{
		printf("\n >>>  Menu  <<< ");
		printf("\n 1. Square of circle");
		printf("\n 2. A square area");
		printf("\n 3. Count words in a sting");
		printf("\n 4. Square an array");
		printf("\n 5. Exit.");
		printf("\n ------------");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: 
				SCIRCLE();
				break;
			case 2: 
				SQUARE();
				break;
			case 3: 
				COUNT();
				break;
			case 4: 
				ARRAY();
				break;
			case 5: 
				printf(" Exit the program");
				return 0;
			default: 
				printf("\n Incorect choice");
				break;
		}
	}
	while( choice != 5);	
	return 0;
}