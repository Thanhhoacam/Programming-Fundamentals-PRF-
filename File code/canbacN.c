#include <stdio.h>
#include <math.h>
 
int main()
{
//Khai báo các số mình muốn thực hiện khai căn
    // int a = 4;
    // int b = 8;
    // int c = 27;
    // int d = 35;

     int a, n;
    printf("Nhap co so a: ");
    scanf("%d", &a);
     
    printf("Nhap so mu n: ");
    scanf("%d", &n);
 
    float kq = pow(a,1/(float)n); //(float)n -> ép kiểu n thành số nguyên || khi thực hiện phép chia 2 số nguyên bạn cần ép kiểu 1 trong 2 số thì kq ms có thể ra được số thực...thy vì viết pow(a,1/(float)n) ta cũng có thể viết pow(a,1./n) hoặc pow(a,(float)1/n);
    printf("\nCan bac %d cua %d la: %f", n, a, kq);
     
 
//Thực hiện khai căn
    // printf("\nCan bac 2 cua %d la: %f",a, pow(a,1/2.)); //Vì sau lại để dấu "." đằng sau mỗi con số mục đích là để ép kiểu thành số thực(float, double), không làm như vậy thì 2 số nguyên chia cho nhau sẽ chỉ ra 1 số nguyên đó ạ
    // printf("\nCan bac 3 cua %d la: %f",b, pow(b,1/3.));
    // printf("\nCan bac 3 cua %d la: %f",c, pow(c,1/3.));
    // printf("\nCan bac 4 cua %d la: %f",d, pow(d,1/4.));
}