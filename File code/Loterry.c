#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void xoso(int level)
{
    int x, k; // your number
    srand(time(0));
    k = pow(10, level);
    int r = rand() % k; // 00:99
    printf("Enter your numbers: \n");
    scanf("%d", &x);
    if (x == r)
    {
        printf("your number: %d loto is : %d\nYou are win 10000$", x, r);
    }
    else
    {
        printf("your number: %d loto is : %d\nNext time !", x, r);
    }
}
int main()
{
    int n;
    printf("Choose your level \n");
    scanf("%d", &n);
    xoso(n);
    return 0;
}