#include<stdio.h>
int main(){
    char operation,ch;
    int var1,var2;
    printf("Select operation +,-,*,/\n");
    scanf("%c",&operation);
    do{
        printf("Enter two numbers\n");
        scanf("%d%d",&var1,&var2);
        switch(operation){
            case '+':
            printf("Sum of two numbers is %d",var1+var2);
            break;
            case '-':
            printf("Subtraction of two numbers is %d",var1-var2);
            break;
            case '*':
            printf("multiplication of two numbers is %d",var1*var2);
            break;
            case '/':
            printf("Division of two numbers is %d",var1/var2);
            break;
            case '%':
            printf("remainder of two numbers is %d",var1%var2);
            break;
            default:
            printf("Invalid Operation");
            break;
        }
        printf("\nPress Y to continue");
        scanf("%c",&ch);
    }while(ch == 'y' || ch == 'Y');
    return 0;

}