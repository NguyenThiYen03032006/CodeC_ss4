#include <stdio.h>
int main(void){
    int year;
    printf("moi ban nhap vao so nam ");
    scanf("%d", &year);
    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("nam %d la nam nhuan\n", year);
    }else{
        printf("nam %d khong phai nam nhuan\n", year);
    }
    return 0;
}
