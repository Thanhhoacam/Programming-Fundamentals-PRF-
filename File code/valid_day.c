#include <stdio.h>

int CheckValidDay(int ngay,int thang,int nam){
switch(thang) {

    case 1: case 3: case 5: case 7: case 8: case 10:  case 12:

                if( ngay>0 && ngay<=31){

                return 1;

                break;

                }

              else

               { return -1;

                break;

                }

    case 4: case 6: case 9: case 11:

                if( ngay<=30 && ngay>0){

                return 1;

                break;

                }

                        else{ return -1;

                break;

                }

    case 2:

                if( ngay <=28 && ngay > 0){

                return 1;

                break;

                }

                else

               { return -1;

                break;

                }

    default: return -1;

    break;

    }
}

int main() {

    int ngay, thang, nam;

    printf("Nhap ngay,thang,nam: ");

    scanf("%d%d%d",&ngay,&thang,&nam);
    if (CheckValidDay(ngay,thang,nam)==1)
    {
        printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);
    }else
    {
        printf("Ngay %d thang %d nam %d khong hop le\n",ngay,thang,nam);
    }
    
    
    
    

}