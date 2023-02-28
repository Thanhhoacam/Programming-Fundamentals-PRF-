 #include <stdio.h>

int CheckOddEven(int num){

 if(num%2 == 0) // 0 is considered to be an even number
                    // printf("\n\n%d is an Even number\n\n",num);
                    return 0; // la so chan
                else
                    // printf("\n\n%d is an Odd number\n\n",num);
                    return 1; // la so le
}
void OddEven(int check, int n){
if (check == 1){
    printf("%d is odd number",n);

}else
    {
    printf("%d is even number",n);
    }
}


int main (){
int n = 3;
int check = CheckOddEven(n);
OddEven(check,n);
    return 0;
}