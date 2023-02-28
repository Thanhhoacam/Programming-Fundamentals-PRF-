#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>

// int pow(int X, int Y) {

// 	int power = 1, i;

// 	for (i = 1; i <= Y; ++i) {
// 		power = power * X;
// 	}

// 	return power;

// }

int main()
{
    int rem_c1, sum_c1 = 0, i_c1 = 0;
    int i_c2 = 0, rem_c2, sum_c2 = 0, remain_c2[100], len_c2 = 0;
    int rem_c3, i_c3 = 0, sum_c3 = 0, remain_c3[100], len_c3 = 0;
    int cnt_c4, i_c4;
    int bin_c4[32];
    int cnt_5, i_5;
    int oct_5[32];
    int cnt_c6, i_c6;
    char hex_c6[32]; /*bcoz it contains characters A to F*/
    int rem_c7[50], len_c7 = 0, decimal_c7 = 0, i_c7 = 0, num_c7, ans_c7;
    int decimal_8 = 0, i_8 = 0, num_8, ans_8;
    int rem_9[50], len_9 = 0, decimal_9 = 0, i_9 = 0, num_9, ans_9 = 0;
    int i_10 = 0;
    int i_11, num_11 = 0, power_11 = 0, decimal_11 = 0;
    int i_12, len_12, num_12 = 0, power_12 = 0, decimal_12 = 0, rem_12[100];

    int choice, num = 1, check;
    long int bin, oct, dec;
    char hex[100];
    int i, j; //  FOR PATTERN

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while (num != 0) // Nhap num bang 0 thi vong lap se thoat.
    {
        printf("\t\t>>>>>> MENU OF CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n***BINARY TO DECIMAL***\n");
        D:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto D;
                }
                else
                    check = check / 10;
            }

            // Bin_to_Dec(bin);

            while (bin != 0) // vòng lặp để chia liên tục cho 10
            {
                rem_c1 = bin % 10;
                bin = bin / 10;                       // chia cho 10 để giảm 1 hàng đơn vị
                sum_c1 = sum_c1 + rem_c1 * pow(2, i_c1); // Cộng (số dư * 2 ^ i) , hàm pow là hàm mũ với 2 là số và i là mũ
                i_c1++;
            }

            printf("\nEquivalent Decimal Number : %d", sum_c1);

            break;

        case 2:
            printf("\n***BINARY TO OCTAL***\n");
        E:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto E;
                }
                else
                    check = check / 10;
            }

            // Bin_to_Oct(bin);

            while (bin != 0) // Chuyển Bin về Decimal trước
            {
                rem_c2 = bin % 10;
                bin = bin / 10;
                sum_c2 = sum_c2 + rem_c2 * pow(2, i_c2);
                i_c2++;
            }
            i_c2 = 0;
            while (sum_c2 != 0) // chuyển decimal về octal bằng cách chia cho 8 cho đến khi số dư bằng 0
            {
                remain_c2[i_c2] = sum_c2 % 8;
                sum_c2 = sum_c2 / 8;
                i_c2++;
                len_c2++;
            }
            printf("\nEquivalent Octal Number : ");
            for (i_c2 = len_c2 - 1; i_c2 >= 0; i_c2--)
            {
                printf("%d", remain_c2[i_c2]);
            }

            break;

        case 3:
            printf("\n***BINARY TO HEXA-DECIMAL***\n");
        F:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &bin);
            // CHECKING INPUT IS IN BINARY FORM
            check = bin;

            while (check != 0)
            {
                num = check % 10;
                if (num > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", bin);
                    printf("***TRY AGAIN****\n");
                    goto F;
                }
                else
                    check = check / 10;
            }

            // Bin_to_Hex(bin);

            while (bin != 0) // Vẫn là chuyển về decimal trước
            {
                rem_c3 = bin % 10;
                bin = bin / 10;
                sum_c3 = sum_c3 + rem_c3 * pow(2, i_c3);
                i_c3++;
            }
            i_c3 = 0;
            while (sum_c3 != 0) // chia liên tục cho 16 until số dư = 0
            {
                remain_c3[i_c3] = sum_c3 % 16;
                sum_c3 = sum_c3 / 16;
                i_c3++;
                len_c3++;
            }
            printf("\nEquivalent Hexa-Decimal Number : ");
            for (i_c3 = len_c3 - 1; i_c3 >= 0; i_c3--)
            {
                switch (remain_c3[i_c3])
                {
                case 10:
                    printf("A");
                    break;

                case 11:
                    printf("B");
                    break;

                case 12:
                    printf("C");
                    break;

                case 13:
                    printf("D");
                    break;

                case 14:
                    printf("E");
                    break;

                case 15:
                    printf("F");
                    break;

                default:
                    printf("%d", remain_c3[i_c3]);
                }
            }

            break;

        case 4:
            printf("\n***DECIMAL TO BINARY***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &dec);
            // Dec_to_Bin(dec);

            cnt_c4 = 0;     // gán biến (cnt) điều kiện cho vòng lặp bằng 0.
            while (dec > 0) // decimal về cơ số khác ta chia liên tục decimal cho cơ số đó, đến khi decinmal =0, rồi lấy phần dư từ dưới lên.
            {
                bin_c4[cnt_c4] = dec % 2; // phần dư được lưu vào cuối array vì lấy từ cuối lên.
                dec = dec / 2;
                cnt_c4++;
            }

            /*print value in reverse order*/
            printf("\nEquivalent Binary Number : "); // show array lưu số dư từ cuối lên là ra số nhị phân.
            for (i_c4 = (cnt_c4 - 1); i_c4 >= 0; i_c4--)
                printf("%d", bin_c4[i_c4]);
            break;

        case 5:
            printf("\n***DECIMAL TO OCTAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &dec);
            // Dec_to_Oct(dec);

            cnt_5 = 0; /*initialize index to zero*/
            while (dec > 0)
            {
                oct_5[cnt_5] = dec % 8;
                dec = dec / 8;
                cnt_5++;
            }

            /*print value in reverse order*/
            printf("\nEquivalent Octal Number : ");
            for (i_5 = (cnt_5 - 1); i_5 >= 0; i_5--)
                printf("%d", oct_5[i_5]);
            break;

        case 6:
            printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &dec);
            // Dec_to_Hex(dec);_c6

            cnt_c6 = 0; /*initialize index to zero*/
            while (dec > 0)
            {
                switch (dec % 16)
                {
                case 10:
                    hex_c6[cnt_c6] = 'A';
                    break;
                case 11:
                    hex_c6[cnt_c6] = 'B';
                    break;
                case 12:
                    hex_c6[cnt_c6] = 'C';
                    break;
                case 13:
                    hex_c6[cnt_c6] = 'D';
                    break;
                case 14:
                    hex_c6[cnt_c6] = 'E';
                    break;
                case 15:
                    hex_c6[cnt_c6] = 'F';
                    break;
                default:
                    hex_c6[cnt_c6] = (dec % 16) + 0x30; /*converted into char value*/
                }
                dec = dec / 16;
                cnt_c6++;
            }

            /*print value in reverse order*/
            printf("\nEquivalent Hexa-Decimal Number : ");
            for (i_c6 = (cnt_c6 - 1); i_c6 >= 0; i_c6--)
                printf("%c", hex_c6[i_c6]);
            break;

        case 7:
            printf("\n***OCTAL TO BINARY***\n");
        A:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto A;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            // Oct_to_Bin(oct);

            while (oct != 0) // chuyển octal về decimal trước nên chia lấy dư cho 10.
            {
                ans_c7 = oct % 10;
                decimal_c7 = decimal_c7 + ans_c7 * pow(8, i_c7);
                i_c7++;
                oct = oct / 10;
            }

            i_c7 = 0;
            do
            {
                rem_c7[i_c7] = decimal_c7 % 2; // lưu vào cuối array
                decimal_c7 = decimal_c7 / 2;
                i_c7++;
                len_c7++;
            } while (decimal_c7 != 0);

            printf("\nEquivalent Binary Number : ");
            for (i_c7 = len_c7 - 1; i_c7 >= 0; i_c7--)
            {
                printf("%d", rem_c7[i_c7]);
            }
            break;

        case 8:
            printf("\n***OCTAL TO DECIMAL***\n");
        B:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto B;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            // Oct_to_Dec(oct);

            while (oct != 0)
            {
                ans_8 = oct % 10;
                decimal_8 = decimal_8 + ans_8 * pow(8, i);
                i_8++;
                oct = oct / 10;
            }
            printf("\nEquivalent Decimal Number : %d", decimal_8);
            break;

        case 9:
            printf("\n***OCTAL TO HEXA-DECIMAL***\n");
        C:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &oct);
            // CHECKING INPUT IS IN OCTAL FORM
            check = oct;

            while (check != 0)
            {
                num = check % 10;
                if (num > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", num);
                    goto C;
                }
                else
                {
                    check = check / 10;
                    i++;
                }
            }
            // Oct_to_Hex(oct);

            while (oct != 0) // chuyển octal về decimal
            {
                ans_9 = oct % 10;
                decimal_9 = decimal_9 + ans_9 * pow(8, i_9);
                i_9++;
                oct = oct / 10;
            }
            i_9 = 0;
            while (decimal_9 != 0)
            {
                rem_9[i_9] = decimal_9 % 16;
                decimal_9 = decimal_9 / 16;
                i_9++;
                len_9++;
            }
            printf("\nEquivalent Hexa-Decimal Number : ");
            for (i_9 = len_9 - 1; i_9 >= 0; i_9--)
            {
                switch (rem_9[i_9]) // vì hexa có 10 = A
                {
                case 10:
                    printf("A");
                    break;

                case 11:
                    printf("B");
                    break;

                case 12:
                    printf("C");
                    break;

                case 13:
                    printf("D");
                    break;

                case 14:
                    printf("E");
                    break;

                case 15:
                    printf("F");
                    break;

                default:
                    printf("%d", rem_9[i_9]);
                }
            }
            break;

        case 10:
            printf("\n***HEXA-DECIMAL TO BINARY***\n");
        X:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &hex);
            // check
            for (i = strlen(hex) - 1; i >= 0; i--)
            {
                if (hex[i] > 'f' && hex[i] <= 'z' || hex[i] > 'F' && hex[i] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[i]);
                    goto X;
                }
            }
            // Hex_to_Bin(hex);

            printf("\nEquivalent Binary Number : ");
            for (i_10 = 0; i_10 < strlen(hex); i_10++)
            {
                switch (hex[i_10]) // vì 4 bit của bin có thể tách ra chuyển thành hexa
                {
                case '0':
                    printf("0000");
                    break;
                case '1':
                    printf("0001");
                    break;
                case '2':
                    printf("0010");
                    break;
                case '3':
                    printf("0011");
                    break;
                case '4':
                    printf("0100");
                    break;
                case '5':
                    printf("0101");
                    break;
                case '6':
                    printf("0110");
                    break;
                case '7':
                    printf("0111");
                    break;
                case '8':
                    printf("1000");
                    break;
                case '9':
                    printf("1001");
                    break;
                case 'A':
                case 'a':
                    printf("1010");
                    break;
                case 'B':
                case 'b':
                    printf("1011");
                    break;
                case 'C':
                case 'c':
                    printf("1100");
                    break;
                case 'D':
                case 'd':
                    printf("1101");
                    break;
                case 'E':
                case 'e':
                    printf("1110");
                    break;
                case 'F':
                case 'f':
                    printf("1111");
                    break;

                default:
                    printf("\n Invalid hexa digit %c ", hex[i_10]);
                }
            }
            break;

        case 11:
            printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
        Y:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &hex);
            // check
            for (i = strlen(hex) - 1; i >= 0; i--)
            {
                if (hex[i] > 'f' && hex[i] <= 'z' || hex[i] > 'F' && hex[i] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[i]);
                    goto Y;
                }
            }
            // Hex_to_Dec(hex);

            for (i = strlen(hex) - 1; i_11 >= 0; i_11--) // A=10, ...so on
            {
                if (hex[i_11] == 'A' || hex[i_11] == 'a')
                {
                    num_11 = 10;
                }
                else if (hex[i_11] == 'B' || hex[i_11] == 'b')
                {
                    num_11 = 11;
                }
                else if (hex[i_11] == 'C' || hex[i_11] == 'c')
                {
                    num_11 = 12;
                }
                else if (hex[i_11] == 'D' || hex[i_11] == 'd')
                {
                    num_11 = 13;
                }
                else if (hex[i_11] == 'E' || hex[i_11] == 'e')
                {
                    num_11 = 14;
                }
                else if (hex[i_11] == 'F' || hex[i_11] == 'f')
                {
                    num_11 = 15;
                }
                else
                //(a[i]>=0 || a[i]<=9)
                {
                    num_11 = hex[i_11] - 48; // vì hex[] là array chứa kí tự nên muốn chuyển kí tự số về số ta trừ 48 trong bảng ascii
                }

                decimal_11 = decimal_11 + num_11 * pow(16, power_11);
                power_11++;
            }
            printf("\nEquivalent Decimal Number : %d", decimal_11);
            break;

        case 12:
            printf("\n***HEXA-DECIMAL TO OCTAL***\n");
        Z:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &hex);
            // check
            for (i = strlen(hex) - 1; i >= 0; i--)
            {
                if (hex[i] > 'f' && hex[i] <= 'z' || hex[i] > 'F' && hex[i] <= 'Z') // hex[] la array cua char
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", hex[i]);
                    goto Z;
                }
            }
            // Hex_to_Oct(hex);
          

            for (i_12 = strlen(hex) - 1; i_12 >= 0; i_12--)
            {
                if (hex[i_12] == 'A' || hex[i_12] == 'a')
                {
                    num_12 = 10;
                }
                else if (hex[i_12] == 'B' || hex[i_12] == 'b')
                {
                    num_12 = 11;
                }
                else if (hex[i_12] == 'C' || hex[i_12] == 'c')
                {
                    num_12 = 12;
                }
                else if (hex[i_12] == 'D' || hex[i_12] == 'd')
                {
                    num_12 = 13;
                }
                else if (hex[i_12] == 'E' || hex[i_12] == 'e')
                {
                    num_12 = 14;
                }
                else if (hex[i_12] == 'F' || hex[i_12] == 'f')
                {
                    num_12 = 15;
                }
                else
                //(a[i]>=0 || a[i]<=9)
                {
                    num_12 = hex[i_12] - 48;
                }

                decimal_12 = decimal_12 + num_12 * pow(16, power_12);
                power_12++;
            }

            i_12 = 0, len_12 = 0;
            while (decimal_12 != 0)
            {
                rem_12[i_12] = decimal_12 % 8;
                decimal_12 = decimal_12 / 8;
                i_12++;
                len_12++;
            }
            printf("\nEquivalent Octal Number : ");
            for (i_12 = len_12 - 1; i_12 >= 0; i_12--)
            {
                printf("%d", rem_12[i_12]);
            }
            break;

        default:
            printf("\n***INVALID NUMBER***\n");
            break;
        }
        printf("\n\nTry Again OR not ? = (1/0) :\n"); // nhập số khác 1 vẫn tiếp tục được nhá
        scanf("%d", &num);
    }
    printf("Out the menu successfully");
}
