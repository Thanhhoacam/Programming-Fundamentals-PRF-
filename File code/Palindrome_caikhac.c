// #include <stdio.h>
// palidrome la so 1221, viet xuoi viet nguoc deu dc

// int main()
// {
//     int n, reversed = 0, remainder, original;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     original = n;

//     // reversed integer is stored in reversed variable
//     while (n != 0 && n >= 0)
//     {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }

//     // palindrome if orignal and reversed are equal
//  // ve hinh tam giac can chieu dai 2 canh = n nhu vi du

// //Vi du n=4
// /*
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
// */
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>


// int main() {
//   system("cls");
  
//   int n;
//   scanf("%d", &n);
  
//   printf("\nOUTPUT:\n");
  
//   int i,j;
//   for(i = 0; i < 2*n - 1;i++) { //In cot dung de in 2*n so cot chua sao nhu n=4 thi co 8 cot chua sao
//   //Trong vong for nay dung de in hang
//     for(j = 0; j < n;j++) {//Trong 1 hang toi da la n sao
//       if(i >= n -1 - j && i <= n -1 +j)
//       /*i>= n -1 - j: Dieu kien in ra so sao hang phia duoi*/
//       /*i <= n -1 +j: Dieu kien in ra so sao o hang phia tren*/
//         printf("*");
//       else printf(" ");
//     }
//   }
//   printf("\n");
// }
//   //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//   printf("\n");
//   system ("pause");
//   return(0);
// }