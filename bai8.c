#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a, b, c;
    printf("moi ban nhap vao 3 canh cua 1 tam giac ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>0 && b>0 && c>0){
        if (a+b>c && a+c>b && b+c>a){
            if ((abs(a-b)<c) && (abs(a-c)<b) && (abs(b-c)<a)){
                printf("%d %d %d la 3 canh tam giac\n", a, b, c);
            }else{
                printf("Khong la 3 canh tam giac\n");
            }
        }else {
            printf("Khong la 3 canh tam giac\n");
        }
    }else{
        printf("gia tri ban nhap khong hop le\n");
    }
    return 0;
}
