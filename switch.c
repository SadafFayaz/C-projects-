#include<stdio.h>
int main(){
    int position = 2;
    switch(position){
        case 1:
        printf("gold");
        break;
        case 2:
        printf("silver");
        break;
        case 3:
        printf("bronze");
        break;
        default:
        printf("No Medal");


    }
    return 0;
}