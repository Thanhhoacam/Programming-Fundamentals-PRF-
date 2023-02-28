#include <stdio.h>

float SumFrac(int n){ // tong cac phan so
    float sum=1; // sum =1 vẫn được
    for(int i=2;i<=n;i++){
        if (i%2==0)
        sum = sum + (float)1/i; // chú ý : 1 là số nguyên, i là số nguyên, nên 1/i là số nguyên nên ta phải ép kiểu về số thực là float thì mới giữ lại được phần thập phân
        else                            // Nếu không thì nó sẽ trả về số nguyên là bằng 0 vì phân số là 0.1121212 nên khi lấy số nguyên thì nó sẽ kaays mỗi số 0
        sum = sum - (float)1/i;
    }
    return sum;

}

int main (){

float sum = SumFrac(2);
printf("%f",sum);
    return 0;
}