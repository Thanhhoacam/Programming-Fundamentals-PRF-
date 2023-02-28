#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// pointer for array
// int *B;
// B = (int*) calloc(6,4) -> create an array of 6 element and each element 4 byte because int is 4 byte
// same : B = (int*) malloc(24) -> 6 element of 4 byte
//  memmory allocation : cap cho chung ta 10 phan tu, moi phan tu kich thuoc kieu int la 4
// continuous allocation: cap phat lien tuc cho chung 10 phan tu, moi phan tu 4 byte vi laf kieu int
// ta co the su dung sizeof() neu khong nho kich thuoc cua data type
// vi du : float*B = (float*) calloc(5,sizeof(float)) hay float* C = (float*) malloc(5*sizeof(float))
// summary:
// int A[5] -> A[i] : value , &A[i] : address
// int *A -> *(A+i) : value, (A+i) : address
void Intput(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 10; // rand %(b-a+1) + a
    }
}

void InputPointer(int *A, int n) // input pointer
{
    for (int i = 0; i < n; i++)
    {
        *(A + i) = rand() % 10; // A[i] = *(A+i)
    }
}
void InputManual(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", A + i); // scanf("%d", &A[i])
    }
}
void Output(int X[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }
}
void OutputPointer(int *X, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(X + i));
    }
}
int main()
{
    int A[10]; // so luong element toi da
    int n = 5; // so luong emelent thuc te dang su dung
    // create pointer array
    int *B;
    B = (int *)calloc(10, 4); // another way : B = (int*) malloc(40);
    // 1. B = (int *)calloc(10, sizeof(int));
    // 2. B = (int *)malloc(10 * sizeof(int));
    // 3. int *B = (int *)calloc(10, sizeof(int));
    //  InputPointer(A,n);
    InputManual(B, n);
    InputPointer(B, n);
    printf("\nMang A:\n");
    // Output(A, n);
    OutputPointer(B, n);
    return 0;
}