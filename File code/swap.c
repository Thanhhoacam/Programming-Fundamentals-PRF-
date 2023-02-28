#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b){
int temp = *a;
*a = *b;
*b = temp;
}

int main(int argc, char *argv[]) {
int n, m;
printf("Enter two positive integer n and m: ");
scanf("%d%d", &n,&m);
printf("\nBefore swap:\n");
printf("%-5d%-5d", n,m);
printf("\nAfter swap:\n");
swap(&n,&m);
printf("%-5d%-5d", n,m);
printf("\n");

return 0;
}

