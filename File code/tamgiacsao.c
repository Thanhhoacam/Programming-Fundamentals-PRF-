#include <stdio.h>

// tạo một tam giác cân rỗng có độ cao bằng n = ma trận có n hàng và 2m-1 cột
void TamGiacCanRong(int n){ // tam giác cân thì dùng ma trận m*(2m-1) = m hàng và 2m-1 cột
int k = n - 1; // k là cột đối xứng mà biễu diễn từ 0 nên trừ đi 1
int i,j;
    for(i=0; i<n-1; i++){ // i chạy tới n-2 vì phải để n-1 để in dấu * cho đáy, nếu cho i chạy từ i = 1 thì i chỉ tới i <= n-1
        for(j=0; j<(2*n-1); j++){ // đã dùng đúng số cột, không giống như số hàng ở trên (chừa lại 1 hàng n-1)
            if (j == k-i || j == k+i) printf(" * ");
        else printf("   ");
    }
printf("\n");
}
for (i=0; i<(2*n-1) ;i++) printf(" * "); // in * cho tất cả các cột ở hàng n-1
}
// n là chiều cao tam giác cân rỗng
void HthoiRong(int n){
// in tam giác cân rỗng giống như ở trên nhưng phần đáy không cần in hết nên ta thêm dấu = để in thêm 2 dấu * ở phần đường ngang
int i,j;
int k = n - 1; 
    for(i=0; i<=n-1; i++){ 
        for(j=0; j<=(2*n-1); j++){ 
            if (j == k-i || j == k+i) printf(" * ");
        else printf("   ");
    }
printf("\n");
}
// in nửa dưới hình thang, không cần cạnh giữa hình thang
for(i=n-2; i>=0; i--){ 
        for(j=0; j<(2*n-1); j++){ 
            if (j == k-i || j == k+i) printf(" * ");
        else printf("   ");
    }
printf("\n");
}


}

// in tam giac vong can co chieu cao n - tam giac đặc
void TamGiacVuongCanTrai(int n){ // tam giac có n hàng, hàng thứ n thì sẽ có tương ứng n *
int i,j;
    for (i = 1; i <= n; i++)
    {
        for(j=1; j<=i ; j++){
            printf(" * ");
        }
        printf("\n");
    }
    
}

void TamGiacVuongCanTraiNguoc(int n){ // tam giac có n hàng, hàng thứ n thì sẽ có tương ứng n *, Ngược đầu thì cho chạy từ lớn về bé
int i,j;
    for (i = n; i >=1; i--)
    {
        for(j=1; j<=i ; j++){
            printf(" * ");
        }
        printf("\n");
    }
    
}

void TamGiacVuongCanPhai(int n){ // tam giac có n hàng, hàng thứ n thì sẽ có tương ứng n *
int i,j,k;
    for (i = 1; i <= n; i++)
    {
        for (k = 0; k < n-i; k++) // hàng thứ bao nhiều thì có tương ứng số * nên số " " được in ra sẽ bằng (n - số * ở hàng đó)
        {
            printf("   ");
        }
        
        for(j=1; j<=i ; j++){
            printf(" * ");
        }
        printf("\n");
    }   
}

void TamGiacVuongCanPhaiNguoc(int n){ // tam giac có n hàng, hàng thứ n thì sẽ có tương ứng n *
int i,j,k;
    for (i = n; i >= 1; i--)
    {
        for (k = 0; k < n-i; k++) // hàng thứ bao nhiều thì có tương ứng số * nên số " " được in ra sẽ bằng (n - số * ở hàng đó)
        {
            printf("   ");
        }
        
        for(j=1; j<=i ; j++){
            printf(" * ");
        }
        printf("\n");
    }
    
}

void TamGiacVuongCanRongTrai(int n){
int i,j;
printf(" * \n");
printf(" *  * \n");
for (i = 1; i <= n-3; i++)
{
    printf(" * "); // dấu * ở viền trái
    for (j = 1; j <= i; j++)
    {
       printf("   ");
    }
    

    printf(" * \n"); // dấu * ở viền phải
    
}
for (i = 1; i <= n; i++)
{
   printf(" * ");
}

}

void TamGiacVuongCanRongPhai(int n){
int i;
for (i = 1; i <= n-1; i++)
{
   printf(" 0 ");
}
printf(" * \n"); // dòng 1


for (i = 1; i <= n-2; i++)
{
   printf(" 0 ");
}
printf(" *  * \n"); // dòng 2

// dòng quy luật
int k = 1; // số 0 ở giữa 2 dấu * thay đổi và bắt đầu bằng 1 cho đến khi k = n-3 và ngược lại, số 0 thay đổi và giảm dần từ a = n-3 hay a = n - 2(* ở viền) - 1(số 0 ở giữa) số 0 đến khi còn a =1
while ( k <= n-3)
{
   // in ra a số 0
int a = n-2-k; // trừ đi 2 dấu sao bên ngoài viền, trừ thêm k số 0 ở giữa 2 dấu *
for (i = 1; i <= a; i++) // in ra (n-2-k) số 0
{
   printf(" 0 ");
}
printf(" * ");
// in ra b số 0
int b = k;
for (i = 1; i <= b; i++)
{
   printf("   ");
}
printf(" * \n");
k++;
}




for (i = 1; i <= n; i++) // in * hàng cuối
{
   printf(" * ");
}

}

int main (){

TamGiacVuongCanRongPhai(5);
    return 0;
}