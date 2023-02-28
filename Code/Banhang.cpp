#include <stdio.h>
int main(){
	int dongia;
	printf ("Nhap gia cua don hang: ");
	scanf("%d",&dongia);
	int soluong;
	printf ("Nhap so luong ban cua mat hang: ");
	scanf ("%d",&soluong);
	int thanhtien=dongia*soluong;
	if (thanhtien>100){
		thanhtien=thanhtien*0.97;
	}
	else{
		thanhtien=thanhtien*1;
	}	
	printf ("Tong tien phai tra la: %d",thanhtien);
	return 0;
}
	
