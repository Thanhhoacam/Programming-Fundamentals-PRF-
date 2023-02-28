#include <stdio.h>
// #include <stdlib.h> // for system clear screen function
int Menu(){
//    system("@cls||clear");
    printf("---------MENU---------\n");
    printf("Cac chuc nang: \n");
    printf("1. Factorial \n");
    printf("2. Sum fractration \n");
    printf("3. Sum until 0\n");
     printf("4. Thoat\n\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);
    return choice;
}

int Factorial(int n){ // tinh giai thua
    
    int sum = 1;
    for (int i=1; i <=n; i++){
        
        sum = sum *i;
    }
    return sum;
}

float SumFrac(int n){ // tong cac phan so
    float sum=1;
    for(int i=2;i<=n;i++){
        if (i%2==0)
        sum = sum + (float)1/i; // chú ý : 1 là số nguyên, i là số nguyên, nên 1/i là số nguyên nên ta phải ép kiểu về số thực là float thì mới giữ lại được phần thập phân
        else                            // Nếu không thì nó sẽ trả về số nguyên là bằng 0 vì phân số là 0.1121212 nên khi lấy số nguyên thì nó sẽ kaays mỗi số 0
        sum = sum - (float)1/i;
    }
    return sum;

}

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


int main() {
int flag=1;
int n;
  
  while (flag==1) {
   
    int choice = Menu();

  switch (choice) {
  case 1:
    printf("enter your number: ");
    scanf("%d",&n);
    printf("Factional(%d): %d\n\n", n, Factorial(n));

    break;
  case 2:
  printf("enter your number: ");
    scanf("%d",&n);
    printf("SumFrac(%d): %.2f \n\n",n,SumFrac(n));
    break;
  case 3:
//   printf("enter your number: ");
//     scanf("%d",&n);
    printf("SumUntil(%d): %d \n\n",n,SumUntil(n));
    break;

  case 4:
   flag =0;
    printf("Thoat Menu thanh cong \n\n");
    break;
    // neu return 0 thi ko can break;
  default:
    printf("invalid choice\n\n");
    break;
  }
  }

  return 0;
}