#include <stdio.h>

int SumDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}


int main()
{
    int n;
    printf("nhap vao n: \n");
    scanf("%d", &n);
    printf("sum digits is %d", SumDigits(n));
    // Swap(2, 3);
    return 0;
}

