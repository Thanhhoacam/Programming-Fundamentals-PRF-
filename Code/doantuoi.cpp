#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int age;
	int r=10+rand()%(80+1-10);
	srand(time(0));
	for (int i=1;i<=3;i++){
		printf ("\nGuess age of a friend: ");
		scanf ("%d",&age);
		if (age==r){
			printf ("True");
		}
		else if (age<r){
			printf ("Higher");
		}
		else {
			printf ("Lower");
		}
	}	
}	
