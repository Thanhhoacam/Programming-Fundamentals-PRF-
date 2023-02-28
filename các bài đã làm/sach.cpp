#include <stdio.h>
#include <conio.h>

main()
{
    int n = 260; // n = 00 00 00 00 00 00 01 04 H
    int *p = &n; // p trỏ tới byte 00 đầu tiên của  n
    char *pp = (char *)p;
    // do char chỉ có 1 byte nên pp chỉ tới byte nhỏ nhất của n
    // là byte có giá trị 04 cuối cùng
    *pp = 0;
    // gán *pp =0 tức là set giá trị trong ô nhớ cuối của n = 0
    // lúc này n trở thành n = 00 00 00 00 00 00 01 00 H
    *(pp + 2) = 1;
    // set giá trị trong ô nhớ gần cuối cách 2 ô nhớ giá trị là 1
    // lúc này n trở thành n= 00 00 00 00 00 01 01 00
    printf("n = %d\n", n);

    // kết quả 65792

    // Kq trên còn phụ thuộc vào Endianness.
    return 0;
}