#include <stdio.h>

void pheptinh(int a, int b, int *c, int *t, int *n, int *mo)
{
    *c = a + b;
    *t = a - b;
    *n = a * b;
    *mo = a % b;
}

int main()
{
    int a, b, c, t, n, mod;
    a = 5;
    b = 6;
    pheptinh(a, b, &c, &t, &n, &mod);
    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, t);
    printf("%d * %d = %d\n", a, b, n);
    printf("%d mod %d = %d\n", a, b, mod);

    return 0;
}