#include <stdio.h>

int Factorial(int n){ // tinh giai thua
    
    int sum = 1;
    for (int i=1; i <=n; i++){
        
        sum = sum *i;
    }
    return sum;
}

int main (){
    int n = 5;
int giaithua = Factorial(n);
printf("%d",giaithua);
    return 0;
}