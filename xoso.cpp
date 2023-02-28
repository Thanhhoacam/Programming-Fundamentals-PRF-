// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void xoso(int level)
// {
//     int x; // your number
//     srand(time(0));
//     int r = rand() % 100; // 00:99
//     switch (level)
//     {
//     case 1:
//         r = rand() % 10;
//         break;
//     case 2:
//         r = rand() % 100;
//         break;
//     case 3:
//         r = rand() % 1000;
//         break;
//     case 4:
//         r = rand() % 10000;
//         break;
//     case 5:
//         r = rand() % 100000;
//         break;
//     default:
//         printf("invalid level\n");
//         break;
//     }
//     printf("Enter your numbers: \n");
//     scanf("%d", &x);
//     if (x == r)
//     {
//         printf("your number: %d loto is : %d\n", x, r);
//         printf("You are win 10000$");
//     }
//     else
//     {
//         printf("your number: %d loto is : %d\n", x, r);
//         printf("Next time !");
//     }
// }
// int main()
// {
//     int n;
//     printf("Choose your level \n");
//     scanf("%d", &n);
//     xoso(n);
//     return 0;
// }

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