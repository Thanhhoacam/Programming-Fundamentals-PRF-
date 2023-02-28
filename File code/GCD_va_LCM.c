/*
 * C program to find the GCD and LCM of two integers 
 * using while loop and Euclids' algorithm
 */
#include <stdio.h>
 
void main()
{
    int so1, so2, gcd, lcm, sodu, tuso, mauso;
 
    printf("Enter two numbers:\n");
    scanf("%d %d", &so1, &so2);
 
    //To find tuso and mauso
    tuso = (so1>so2)?so1:so2;
    mauso = (so1<so2)?so1:so2;
    sodu = tuso % mauso;
 
    while (sodu != 0)
    {
        tuso   = mauso;
        mauso = sodu;
        sodu   = tuso % mauso;
    }
    gcd = mauso;
    lcm = so1 * so2 / gcd;
    printf("GCD of %d and %d = %d\n", so1, so2, gcd);
    printf("LCM of %d and %d = %d\n", so1, so2, lcm);
}