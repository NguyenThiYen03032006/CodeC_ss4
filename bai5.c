#include <stdio.h>
int main(void){
    int number1, number2, number3;
    printf("nhap vao 3 so nguyen ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if((number1<number3 && number3<number2) || (number2<number3 && number3<number1)){
        printf("so %d nam giua so %d va %d\n", number3, number2, number1);
    }else{
        printf("so %d khong nam giua %d va %d\n", number3, number2, number1);
    }
    return 0;
}
