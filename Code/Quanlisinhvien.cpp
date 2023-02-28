#include <stdio.h>
#include <string.h>
#define MAXN 100
#define MAXCHOICE 5
char Choice(){
 int c;
 printf("1-Add a student\n");
 printf("2-Remove a student\n");
 printf("3-Search a student\n");
 printf("4-Print the list in ascending order\n");
 printf("5-Quit\n");
 printf("Choice = ");
 fflush(stdin);
 scanf("%c", &c);
 return c;
}
int isFull(char list[MAXN][21], int *pn) {
 return ((*pn) == MAXN);
}
int isEmpty(char list[MAXN][21], int *pn) {
 return ((*pn) == 0);
}
void add(char list[MAXN][21], int *pn) {
 char s[21];
 int a, existed;
 do {
 printf("Add a student : ");
 fflush(stdin);
 scanf("%20[^\n]", s);
 existed = 1;
 for ( a = 0; a < *pn; a++)
 if (strcmp(s,list[a]) == 0){
 printf("Name existed!Retype!\n");
 existed = 0;
 a = *pn - 1;
 }
 } while (!existed);
 strcpy(list[*pn], s);
 (*pn)++;
 printf("Added!\n");
}
void search(char list[MAXN][21], int *pn){
 int a;
 printf("Searching for : ");
 char s[21];
 fflush(stdin);
 scanf("%20[^\n]", &s);
 for (a = 0; a < *pn; a++){
 char * ptr = strstr(list[a], s);
 if (ptr != "\0") printf("RESULT : Name[%d] : %s\n", a, list[a]);
 }
}
void removed(char list[MAXN][21], int *pn){
 	printf("Which Name you want to removed?(input a number) : ");
 	int del, a;
 	scanf("%d", &del);
 	if (del >= 0 && del < *pn) {
 	for (a = del + 1; a < *pn; a++)
 	strcpy(list[a-1], list[a]);
 	printf("Removed!\n");
 	(*pn)--;
 	} else printf("UnRemoved!\n");
}
void print(char list[MAXN][21], int *pn){
 	int a, b;
 	for (a = 0 ; a < *pn-1; a++)
 	for (b = *pn-1; b > a; b--)
 	if (strcmp(list[b] , list[b-1]) < 0){
 	char t[21];
 	strcpy(t, list[b]);
 	strcpy(list[b], list[b-1]);
 	strcpy(list[b-1], t);
 	}for (a = 0; a < (*pn); a++){
 	printf("Name[%d] : %s \n", a, list[a]);
	}
}
main(){
 char userChoice;
 char list[MAXN][21];
 int n = 0;
 do{
 userChoice = Choice();
 switch(userChoice) {
 case '1': 
 	add(list, &n);
 	break;
 case '2':
 	removed(list, &n);
	break;
 case '3':
 	search(list, &n);
 	break;
 case '4':
 	print(list, &n);
 	break;
 case '5':
 	return 0;
 	break;
 		}
 	}while (userChoice != MAXCHOICE);
}
