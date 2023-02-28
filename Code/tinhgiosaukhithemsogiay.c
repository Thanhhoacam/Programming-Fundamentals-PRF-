#include <stdio.h>
int main (){
	int gio,phut,giay;
	int them;
	printf("Nhap gio phut giay: ");
	scanf("%d%d%d",&gio,&phut,&giay);
	printf("Nhap giay them: ");
	scanf("%d",&them);
	if(giay + them<60)
	    giay = giay + them;
    else if(giay+them>60)
    {
    	giay = giay + them - 60;
    	phut = phut + 1;
    }
    else if(phut>=60)
    {
    	phut = phut - 60;
    	gio = gio + 1;
    }
    printf("%02d:%02d:%02d",gio,phut,giay);   	  
	return 0;
}
