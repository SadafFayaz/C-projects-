#include<stdio.h>
int main(){
    int a,b;
    a = 2;
    b = 4;
    int temp = a;
    a = b;
    b = temp;
    printf("a =%d\nb =%d ", a,b);
    return 0;
}