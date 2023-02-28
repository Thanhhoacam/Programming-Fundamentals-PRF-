#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int a[], int n) {
int i;
for(i=0; i<n; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]);
}
}

int isPrime(int n) {
int result = 1;
if(n<2) result = 0;
else {
int i;
for(i=2; i<=n/2; i++) {
if(n%i==0) {
result = 0;
}
}
}
return result;
}

int findBiggestPrimeNumber(int a[], int n) {

int i, max = -1;
for (i = 0; i < n; i++) {
if (isPrime(a[i]) == 1 && a[i] > max) {
max = a[i];
}
}
return max;

}



int main(int argc, char *argv[]) {
int n, a[MAX];
char c;
do {
printf("Enter number of element in array [1..100]: ");
fflush(stdin);
scanf("%d%c", &n, &c);
} while(n<1 || n>MAX || c != '\n');
inputArray(a,n);
printf("Biggest prime number in array:\n");

printf("%d", findBiggestPrimeNumber(a,n));
printf("\n");

return 0;
}

