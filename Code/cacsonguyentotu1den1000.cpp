#include <stdio.h>
#include <math.h>
int main(){
	
	for (int i=1;i<1000;i++){
		int count=0;
		for (int j=2;j<=sqrt(i);j++){
			if (i%j==0){
				count++;
			}
		}
		if (count==0&&i>1)
		printf ("%d\t",i);
		
	}
	return 0;
}
