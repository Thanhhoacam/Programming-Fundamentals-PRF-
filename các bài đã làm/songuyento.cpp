#include <stdio.h>

// so nguyen to hay PRIME


//số nguyên tố là những số chỉ có đúng hai ước số là 1 và chính nó = n >1 and n % other number != 0
// i chạy từ 2 đến n/2 nếu nửa đầu có tín hiệu chia hết cho 1 số thì không phải số nguyên tố, nửa đầu không có thì nửa sau chắc chắn không có

int CheckNguyenTo (int n){
   int flag = 1;
    for(int i = 2; i<=n/2;i++){
        if (n%i==0){
            flag = 0;
        }
    }
    return flag;
}

void SoNguyenTo (int check, int n){
    if (check == 1)
    {
        printf("%d la so nguyen to",n);
    }else
    {
        printf("%d khong phai la so nguyen to",n);
    }
    
}

int main (){

int n = 29;
int check = CheckNguyenTo(n);
SoNguyenTo(check,n);

    return 0;
}