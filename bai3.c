#include <stdio.h>
int main(void){
    int number;
    printf("nhap vao 1 so nguyen ");
    scanf("%d", &number);
    if(number%3==0 && number%5==0){
        printf("chia het cho 3 va 5\n");
    }else if(number%3==0){
        printf("chia het cho 3 nhung khong chia het cho 5\n");
    }else if(number%5==0){
        printf("chia het cho 5 nhung khong chia het cho 3\n");
    }else{
        printf("khong chia het cho ca 3 va 5\n");
    }
    return 0;
}
