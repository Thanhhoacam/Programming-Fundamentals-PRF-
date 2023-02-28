#include <stdio.h>

int SumUntil(int n){ // muon minh nhap roi moi kiem tra, so lan lap ko biet truoc nen dung do while
    
    int sum=0;
    do{
    printf("Enter number until enter 0: ");
    scanf("%d",&n);
    sum = sum + n;
    }
    while(n!=0);
return sum;

}

int main (){
int sum = SumUntil(12);
printf("%d",sum);
    return 0;
}