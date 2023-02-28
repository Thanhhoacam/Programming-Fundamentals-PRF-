#include <stdio.h>
#include <stdlib.h> // for system clear screen function
int Menu(){
   system("@cls||clear");
    printf("Cac chuc nang: \n");
    printf("1.  \n");
    printf("2.  \n");
    printf("3. \n");
     printf("4. Thoat\n\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);
    return choice;
}



int main() {
int flag=1;
  
  while (flag==1) {
   
    int choice = Menu();

  switch (choice) {
  case 1:
    printf("case\n\n");

    break;
  case 2:
    printf("case \n\n");
    break;
  case 3:
    printf("case \n\n");
    break;

  case 4:
   flag =0;
    printf("Thoat Menu thanh cong \n\n");
    break;
    // neu return 0 thi ko can break;
  default:
    printf("invalid choice");
  }
  }

  return 0;
}