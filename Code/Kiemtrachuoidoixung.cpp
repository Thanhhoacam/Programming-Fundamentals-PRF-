#include <stdio.h>
#include <string.h>
int doixung(char s[100]);
int main(){
 	char chuoi[100];
   	printf("\nNhap chuoi: ");
   	gets(chuoi);
    if(doixung(chuoi)==0)
   	printf("\nChuoi khong doi xung");
   	else printf("\nChuoi doi xung");
  
}
int doixung(char s[100]){
   	int i,n;
   	n= strlen(s);
   	for(i=0;i<n/2;i++){
      	if(s[i]!=s[n-1-i])
      	return 0;
   	}
   	return 1;
}
