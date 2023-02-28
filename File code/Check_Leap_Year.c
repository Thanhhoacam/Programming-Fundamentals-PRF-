#include  <stdio.h>
#include  <stdlib.h>
  
int checkYear(int year) 
{ 
// Trả về 1 nếu
// chia hết cho 4 nhưng không chia hết cho 100 
// hoặc chia hết cho 400
return (((year % 4 == 0) && (year % 100 != 0)) || 
        (year % 400 == 0)); 
} 
  
 
int main() 
{ 
    int year = 2021; 
  
    if(checkYear(year) == 1){
        printf("%d la nam nhuan!", year);
    }else{
        printf("%d khong phai nam nhuan!", year);
    }
    return 0; 
}