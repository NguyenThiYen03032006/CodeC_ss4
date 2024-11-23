#include <stdio.h>
int main(void){
    int month;
    printf("nhap vao thang trong nam ");
    scanf("%d", &month);
    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("thang %d co 31 ngay\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("thang %d co 30 ngay\n", month);
            break;
        case 2:
            printf("thang %d co 28 hoac 29 ngay\n", month);
            break;
        default:
            printf("gia tri thang khong hop le\n");
    }
    return 0;
}
