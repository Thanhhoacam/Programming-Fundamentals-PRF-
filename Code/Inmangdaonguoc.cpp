#include <stdio.h>
void DaoNguoc(int arr[], int start, int end){
    //trong khi start < end thuc hien dao nguoc phan tu
    while (start < end)
    {
        //hoan vi phan tu tai vi tri start cho phan tu tai vi tri end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //tang start
        start++;
        //giam end
        end--;
    }
}
int main(){
    //so luong phan tu cua mang
    int n = 6;
    //khai bao start = 0;
    int start = 0;
    //khao bao end = n - 1
    int end = n - 1;
    //khai bao mang
    int arr[6] = {1,2,3,4,5,6};
    
    //hien thi mang ban dau
    printf("MANG BAN DAU\n");
    for(int i = 0; i < n; i++){
        printf("%d \t",arr[i]);
    }
    
    //goi ham dao nguoc
    DaoNguoc(arr,start,end);
    
    //hien thi mang duoc dao nguoc
    printf("\n\nMANG DUOC DAO NGUOC\n");
    for(int i = 0; i < n; i++){
        printf("%d \t",arr[i]);
    }
}
