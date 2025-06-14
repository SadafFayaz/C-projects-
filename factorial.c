#include<stdio.h>
int main(){
    int n;
    unsigned long long fact = 1;
    scanf("%d",&n);
    if(n < 0){
        printf("No factorial");
    }
    else{
        for(int i =1;i<=n;i++){
        fact *= i;
        }
        printf("%llu",fact);
    }
    return 0;

}