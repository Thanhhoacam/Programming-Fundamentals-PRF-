#include <stdio.h>
unsigned long long frac(int n){
	if(n == 0 || n == 1) return 1;
	int i;
	unsigned long long product = 1;
	for(i = 2; i <= n; i++){
		product *= i;
	}
	return product;
}

int isPrime(int n){
	if(n < 2) return 0;
	int i;
	for(i = 2; i < n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}


int main(){
	int n;
    printf("Enter number n:");
	scanf("%d", &n);
	// if(isPrime(n)){
	// 	printf("%d is a prime number", n);
	// }
	// else{
	// 	printf("%d is not a prime number", n);
	// }
    printf("giai thua cua %d la %d", n,frac(n));
	return 0;
}