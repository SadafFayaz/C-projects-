#include<stdio.h>
void baggage(){
    int a;
    scanf("%d",&a);
    int x = a-23;
    if(a<=23){
        printf("0");
    }else{
        printf("%d",x*12);
    }
}
int main(){
    baggage();
    return 0;
}