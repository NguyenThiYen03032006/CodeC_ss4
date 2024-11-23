#include <stdio.h>
int main(void){
    int before, after, used;
    printf(" moi ban nhap vao chi so cong to dien dau thang ");
    scanf("%d", &before);
    printf(" moi ban nhap vao chi so cong to dien cuoi thang ");
    scanf("%d", &after);
    used = after - before;
    if (used<0){
        printf("cac gia tri ban nhap khong hop le\n");
    }else if(0<=used && used<50){
        printf("so tien dien tieu thu la 10000 dong\n");
    }else if(used<100){
        printf("so tien dien tieu thu la 15000 dong\n");
    }else if(used<150){
        printf("so tien dien tieu thu la 20000 dong\n");
    }else if(used<200){
        printf("so tien dien tieu thu la 25000 dong\n");
    }else{
        printf("so tien dien tieu thu la 30000 dong\n");
    }
    return 0;
}
