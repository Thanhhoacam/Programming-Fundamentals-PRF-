#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int h;
	printf ("Nhap level ban muon choi: ");
	scanf ("%d",&h);
	switch(h){
		case 1: 
			//int r = 0 + rand() % (100 + 1 - 0);
			int r = rand() % (10);
			break;
		case 2: 
			int r = rand() % (100);
			break;
		case 3: 
			int r = rand() % (1000);
			break;
		case 4: 
			int r = rand() % (10000);			
			break;
		case 5: 
			int r = rand() % (100000);	
			break;									
	}	
	int n;
	printf ("So luong ve so muon mua: ");
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		int k;
		printf ("\nSo cua ban la: ");
		scanf ("%d",&k);
		if (k>99999||k<0){
			printf ("So khong ton tai");
		}	
	}
	srand(time(0));
	printf ("Ket qua la: %d",r);
		if (r==k){
			printf ("\nBan da trung giai ");
		}
		else{
			printf ("\nChuc ban may man lan sau");
		}	
}
