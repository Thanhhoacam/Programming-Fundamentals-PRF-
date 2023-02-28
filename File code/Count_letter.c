#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int countLetters(char* s) {

int i, count = 0;
for (i = 0; i < strlen(s); i++) {
if (('a' <= *(s+i) && *(s+i) <= 'z') || ('A' <= *(s+i) && *(s+i) <= 'Z')) count++;
}
return count;

}


int main(int argc, char *argv[]) {
char s[21];
fflush(stdin);
printf("Enter your string: ");
scanf("%20[^\n]", s);
printf("Count letter:");
printf("%d",countLetters(s));
printf("\n");

return 0;
}
