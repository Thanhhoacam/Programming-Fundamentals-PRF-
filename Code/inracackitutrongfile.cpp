#include <stdio.h>
#include <stdlib.h> 
int main(){
    char c[1000];
    FILE *duc;
    duc = fopen("name.txt", "w");
   	if(duc == NULL)
   	{
      	printf("Error!");
      	exit(1);
   	}
   	printf("Enter a sentence: ");
   	gets(c);
    if ((duc = fopen("name.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);         
    } 
    fscanf(duc,"%[^\n]", c);
	printf("Data from the file: %s", c);
    fclose(duc);
    
    return 0;
}

