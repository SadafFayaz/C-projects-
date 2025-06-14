#include<stdio.h>
int main(){
    int a,b;
    a = 10;
    b = 20;
    printf("before swap :a=%d , b = %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nafter swap : a=%d, b=%d",a,b);
    return 0;
}