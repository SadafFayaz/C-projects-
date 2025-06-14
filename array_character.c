#include<stdio.h>
int main(){
    char arr[]={'H','J','y','h'};//or char[] = "HJyh";
    printf("Character array content: %s ",arr);
    char str[100];
    printf("\nEnter a string");
    scanf("%s",str);
    printf("You entered: %s\n",str);
    return 0;
}