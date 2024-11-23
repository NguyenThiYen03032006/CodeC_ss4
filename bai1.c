#include<stdio.h>
int main(void){
    int number;
    printf("Nhap va 1 so nguyen ");
    scanf("%d", &number);
    if(number==0){
        printf("la so nguyen\n");
    }else if( number >0){
        printf("la so duong\n");
    }else{
        printf("la so am\n");
    }
    return 0;
}
