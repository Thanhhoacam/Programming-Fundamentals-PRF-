//đảo ngược số

#include <stdio.h>
int reverse(int n)
{
    int reNum = n % 10; // b1 láº¥y chá»¯ sá»‘ cuá»‘i cÃ¹ng
    n /= 10;            // bá»� chá»¯ sá»‘ cuá»‘i cÃ¹ng
    int last;
    while (n > 0)
    {
        last = n % 10;             // láº¥y chá»¯ sá»‘ cuá»‘i cÃ¹ng
        n /= 10;                   // bá»� chá»¯ sá»‘ cuá»‘i cÃ¹ng
        reNum = reNum * 10 + last; // vÃ²ng láº·p Ä‘á»ƒ thá»±c hiá»‡n bÆ°á»›c 2 3 4
    }
    return reNum;
}
int main()
{

    int n;
    printf("INPUT NUMBER: ");
    scanf("%d", &n);
    printf("REVERSE NUMBER OF %d IS %d ", n, reverse(n));
    return 0;
}