#include <stdio.h>

void hcnRong(int a, int b){

    for(int i = 1;i<=a;i++){ // in day tren
        printf(" * ");
    }
    printf("\n");

// in * ở viền
        for(int k = 1; k<=b-2;k++){
                printf(" * ");
           for (int i = 0; i < a-2; i++) // trừ 2 cái * đã in ở ngoài viền thì mình sẽ in " " liên tục a - 2 lần và trừ 2 cái đáy ở dưới ta sẽ lặp lại b - 2 hàng ở giữa hay b-2 lần 
           {
            printf("   ");
           }
            printf(" * ");
            printf("\n");
        }


     for (int i = 1; i <=a ; i++) // in day duoi
    {
        printf(" * ");
    }
  
    
}

int main (){
hcnRong(7,4);
    return 0;
}