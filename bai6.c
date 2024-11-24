#include <stdio.h>
int main(void){
    int before, after, used, money;
    printf(" moi ban nhap vao chi so cong to dien dau thang ");
    scanf("%d", &before);
    printf(" moi ban nhap vao chi so cong to dien cuoi thang ");
    scanf("%d", &after);
    used = after - before;
    if (used<0){
        printf("cac gia tri ban nhap khong hop le\n");
    }else if(0<=used && used<50){
        money= used * 10000;
        printf("so tien dien tieu thu la %d dong\n", money);
    }else if(used<100){
        money= 50*10000 + ( used-50)*15000;
        printf("so tien dien tieu thu la %d dong\n", money);
    }else if(used<150){
        money= 50*10000 + 50*15000 + (used-100)*20000;
        printf("so tien dien tieu thu la %d dong\n", money);
    }else if(used<200){
        money= 50*10000 + 50*15000 + 50*20000 + (used-150)*25000;
        printf("so tien dien tieu thu la %d dong\n", money);
    }else{
        money= 50*10000 + 50*15000 + 50*20000 + 50*25000 + (used-200)*30000;
        printf("so tien dien tieu thu la %d dong\n", money);
    }
    return 0;
}
