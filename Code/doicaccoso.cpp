#include <stdio.h>
#include<math.h>
#include <string.h>
int Decibina(){
	int number;
    printf("Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
	int binarynumber=0;
	int p=0;
	while (number>0){
		binarynumber+=(number%2)*(pow(10,p));
		p++;
		number/=2;
	}
	printf ("Binary Number of a Given Number: %d\n",binarynumber);
}
int Deciocto(){
	int number;
    printf("Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
	int octonumber=0;
	int p=0;
	while (number>0){
		octonumber+=(number%8)*(pow(10,p));
		p++;
		number/=8;
	}
	printf ("Octo Number of a Given Number: %d\n",octonumber);
}
int Decihexa(){
	int number;
	printf("Please Enter the Number You want to Convert  :  ");
	scanf ("%d",&number);
	int i=0,j=0;
    int a[100];
    while (number!=0){
		a[j]=number%16;
		number=number/16;
		j++;
	}
    for(i=j;i>=0;i--){
		if (a[i]<10)
			printf("%d",a[i]);
        else
    	switch (a[i]){
			case 10: printf("A");break;
            case 11: printf("B");break;
            case 12: printf("C");break;
        	case 13: printf("D");break;
            case 14: printf("E");break;
            case 15: printf("F");break;
        }
    }
}
int Binadeci(){
	int number;
	printf("Please Enter the Number You want to Convert  :  ");
	scanf ("%d",&number);
	int p = 0;
    int decNumber = 0;
    while (number > 0)
    {
        decNumber += (number % 10) * pow(2, p);
        ++p;
        number /= 10;
    }
    printf("Decimal Number of a Given Number = %d\n", decNumber);
}
int Octodeci(){
	int number;
	printf("Please Enter the Number You want to Convert  :  ");
	scanf ("%d",&number);
	int p = 0;
    int decNumber = 0;
    while (number > 0)
    {
        decNumber += (number % 10) * pow(8, p);
        ++p;
        number /= 10;
    }
    printf("Decimal Number of a Given Number = %d\n", decNumber);
}
int Hexadeci(){
	char hex[100] = { 0 };
    int i;
    int dig; 
	printf("Please Enter the Number You want to Convert: ");
    scanf ("%s",&hex);
    int cnt=0;
    int dec=0;
    for (i = (strlen(hex) - 1); i >= 0; i--) {
        switch (hex[i]) {
        case 'A':
            dig = 10;
            break;
        case 'B':
            dig = 11;
            break;
        case 'C':
            dig = 12;
            break;
        case 'D':
            dig = 13;
            break;
        case 'E':
            dig = 14;
            break;
        case 'F':
            dig = 15;
            break;
       	default:
            dig = hex[i]-48;
        }
        dec = dec + (dig)*pow((double)16, (double)cnt);
        cnt++;
    }

    printf("Decimal Number of a Given Number: %d\n", dec);
    return 0;
}
int main (){
	printf("\t\t\t\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");
	while(1){
		printf("\n\t\t\t\t\t>>>>>> MENU OF CONVERSION <<<<<<\n\n");
		printf("\n=> DECIMAL <=\n");
		printf("1: Decimal to Binary.\n2: Decimal to Octal.\n3: Decimal to Hexa-Decimal.\n");
		printf("=> REVERSE <=\n");
		printf("4: Binary to Decimal.\n5: Octal to Decimal.\n6: Hexa-Decimal to Decimal.\n");
		printf("=> EXIT <=\n");
		int k;
		printf ("ENTER YOUR CHOICE: ");
		scanf ("%d",&k);
		switch (k){
			case 1:Decibina();break;
			case 2:Deciocto();break;
			case 3:Decihexa();break;
			case 4:Binadeci();break;
			case 5:Octodeci();break;
			case 6:Hexadeci();break;
			default: return 0;
		}
	}
}
