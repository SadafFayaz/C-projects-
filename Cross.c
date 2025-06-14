#include<stdio.h>
int main(){
    int m ,n;
    scanf("%d%d",&m,&n);
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(i==j || i+j == m + 1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}