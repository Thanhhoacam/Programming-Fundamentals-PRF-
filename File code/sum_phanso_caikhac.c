// Tính tổng sum = 1/x + 1/x^2 + 1/x^3 +... + 1/x^n Với x và n là số nguyên nhập từ bàn phím
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int x,n;
  	scanf("%d%d", &x, &n); //Nhap vao hai so nguyen x va n
  	double sum = 0; //Khoi tao gia tri cua tong bang khong
  	int i;
  	for(i = 0;i <= n;i++)
  	{
  		sum+= 1 / (pow(x,i));	//pow(x,i) la ham tinh luy thua bac i cua x
	}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%.2lf\n", sum);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
//--------------------------------------------------------------------------------------------------------------------

// nhap vao mot chuoi bat ki, xoa het cac ki tu và so, chi giu lai cac chu cai

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char str[100];
  	scanf("%[^\n]", str);
  	int i,j;
  	bool all_al = false;
  	while(all_al == false) // lap de xoa ki tu khong phai chu cai
  	{
  		all_al = true;
  		for(i = 0; i < strlen(str);i++)
  		{
  			if(!isalpha(str[i])) // kiem tra xem str[i] co phai la chu cai khong
			{
				for(j = i; j < strlen(str) ; j++)	// xoa str[i] neu str[i] khong phai chu cai
				{
					str[j] = str[ j + 1];
				}
			}
		}
		for( i = 0; i < strlen(str);i++)	// kiem tra trong str co ki tu nao khong phai chu cai khong
		{
			if(!isalpha(str[i]))
				all_al = false;
		}
	}







  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%s\n", str);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
//--------------------------------------------------------------------------------------------------------------------
//nhap vao mot so tu nhien n, in ra 4 so nguyen to gan nhat lon hon n

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

bool isPrime(int n)	// ham kiem tra so nguyen to
{
	if( n < 2)
		return false;
	int i;
	for(i = 2; i <= sqrt(n);i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int count = 4;
  	int n;
  	scanf("%d", &n);
  	int i = 1;

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	while(count > 0)	// in ra 4 so nguyen to lon hon n
	{
		if(isPrime(n + i))
		{
			printf("%d\n", n + i);
			count--;
		}
		i++;
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  system ("pause");
  return(0);
}
