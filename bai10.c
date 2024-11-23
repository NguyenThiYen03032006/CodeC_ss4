#include <stdio.h>
int main(void){
    int number1, number2, number3;
    printf("nhap vao 3 so nguyen ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if(number1<number2){
        if(number2<number3){
            printf("sap xep 3 so theo thu tu tang dan la: %d %d %d\n", number1, number2, number3);
        }else{//number 2> number3 va number2 > number1
            if(number1<number3){// ss number1 vs number3
                printf("sap xep 3 so theo thu tu tang dan la: %d %d %d\n", number1, number3, number2);
            }else{
                printf("sap xep 3 so theo thu tu tang dan la: %d %d %d\n", number3, number1, number2);
            }
        }
    }else{// number1> number2
        if(number2<number3){
            if(number1>number3){
                printf("sap xep 3 so theo thu tu tang dan la: %d %d %d\n", number2, number3, number1);
            }else{
                printf("sap xep 3 so theo thu tu tang dan la: %d %d %d\n", number2, number1, number3);
            }
        }else{
            printf("sap xep 3 so theo thu tu tang dan la: %d %d %d\n", number3, number2, number1);
        }
    }
    return 0;
}
