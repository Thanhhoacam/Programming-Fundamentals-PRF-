#include <stdio.h>
#include <stdlib.h> 

void NhapMang(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("nhap vao phan tu %d ", i);
        scanf("%d", &arr[i]);
    }
}
void XuatMang(int arr[], int n)
{
    int i;
    printf("mang la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", n);
    }
}
float SumEven(int arr[], int n)
{
    int i;
    int sum = 0;
    int num = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
            num++;
        }
    }
    return (float)sum / num;
}
int Max(int arr[], int n)
{
    int i,j;
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; i++)
        {
            if (max <= arr[i])
            {
                max = arr[i];
            }
        }
    }
    return max;
}
int Menu()
{

    printf("Cac chuc nang: \n");
    printf("1. nhap mang \n");
    printf("2. xuat mang \n");
    printf("3. tim phan tu lon nhat\n");

    printf("4. TBC so chan\n");
    printf("5. Thoat\n\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int n;
    int arr[n];
    int flag = 1;

    while (flag == 1)
    {

        int choice = Menu();

        switch (choice)
        {
        case 1:
            printf("Nhap mang\n\n");
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);
            NhapMang(arr, n);
            break;
        case 2:
            printf("Xuat mang \n\n");
            XuatMang(arr, n);
            break;
        case 3:
            printf("Average Sum of even \n\n");
            SumEven(arr, n);
            break;
        case 4:
            printf("Max \n\n");
            Max(arr, n);
            break;
        case 5:
            flag = 0;
            printf("Thoat Menu thanh cong \n\n");
            break;
            // neu return 0 thi ko can break;
        default:
            printf("invalid choice");
        }
    }

    return 0;
}