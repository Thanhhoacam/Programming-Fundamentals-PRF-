#include<stdio.h>
int main() {
    int n;
    int arr[1000];
    int sum = 0;
    printf ("Nhap so phan tu: ");
   	scanf("%d", &n);
   	int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i]  > 0 ) {
            sum += arr[i];
        }
    }
    printf("Tong cac phan tu thoa man la: %d", sum);
    return 0;
}
