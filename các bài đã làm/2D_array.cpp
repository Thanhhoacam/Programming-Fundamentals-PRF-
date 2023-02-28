#include <stdio.h>
#define Maxcol 5
// 2D array
// bao nhieu hang thi no khong biet duoc nhung so cot phai biet
// int A[][] thi no se bao loi
// int A[][10] thi khong bao loi, toi da 10 cot nen luc dung trong main thi hay tao A[n][10]
void Input(int A[][5], int n, int m) // Matrix A (nxm)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("A[%d][%d] = ", i, j); // A[i][j]
            scanf("%d", &A[i][j]);        // A[i][j] = x
        }
    }
}

void Input1D(int A[], int n) {}
void Output(int A[][5], int n, int m) // Matrix A (nxm)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
int Sum(int A[][Maxcol], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            sum = sum + A[i][j];
        }
    }
    return sum;
}
void InputPointer(int *A, int n, int m) // Matrix A (nxm)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("A[%d][%d] = ", i, j); // A[i][j]
            scanf("%d", (A + i + j));     // A[i][j] = x
        }
    }
}
void OutputPointer(int *A, int n, int m) // Matrix A (nxm)
{
    for (int i = 0; i < n; i++) // n rows
    {
        for (int j = 0; j < m; j++) // m collums
        {

            printf("%d ", *(A + i + j));
        }
        printf("\n");
    }
}

int main()
{
    int A[5][5];      // xin matrix 5x5
    int n = 3, m = 3; // thuc te dung 3x3

    Input(A, n, m);

    // Output(A, n, m);
    int sum = Sum(A, n, m);
    printf("Sum of elements in array = %d", sum);

    return 0;
}