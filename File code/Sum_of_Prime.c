#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n) {
if (n < 2) return 0;
int i;
for (i = 2; i <= sqrt(n); i++) {
if (n % i == 0) return 0;
}
return 1;
}
int main()
{

int n,sum,i;
printf("Enter n = "); 
scanf("%d",&n);

for (i = 2; i<=n; i++) {
if (isPrime(i) == 1) sum += i;
}

printf("\nSum of prime numbers\n");
printf("%d",sum);
printf("\n");

return(0);
}