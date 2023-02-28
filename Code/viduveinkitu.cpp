#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	char s[20]="Hello World.";
	char s1[20]={'H','e','l','l','o'};
	printf ("s = %s \ns1 = %s",s,s1);
	char *s2= (char*)malloc(20);
	s2="Viet Nam";
	printf ("\ns2 = %s",s2);
	printf ("\nEnter a string: ");
//	scanf("%[^\n]s",s); gets(s);
//	printf ("s = %s",s);
	printf ("%s",strlwr(s));
}
