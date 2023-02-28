#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int main()
{
    // char s[20] = "Hello World";
    // char s1[20] = {'H', 'e', 'l', 'l', 'o'};
    // printf("s= %s, s1 = %s\n", s, s1);
    // char *s2 = (char *)malloc(20);
    // s2 = "Viet Nam";
    // printf("s2= %s \n", s);
    // printf("enter a string ");
    // // scanf("%s", &s); // space = /0 to end the string so it only take "one" of "one two"
    // // we use scanf("%[^\n]", name); // báo cho máy biết gặp space thì ko kết thúc chuỗi
    // // or we can use
    // // gets(s); // get the space
    // // scanf("%[^\n]", s); lay tat ca so ngoai tru \n
    // scanf("%[T-Z]", s);

    char s[20] = "Hello World";
    char s1[20] = "cc";
    char s2[20] = "cc";
    char space[20] = " ";
    strcat(s, space);
    strcat(s, s1);
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\ncompare = %d\n", strcmp(s1, s2));
    printf("%s\n", strupr(s));
    printf("%s\n", strlwr(s));
}