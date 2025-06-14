#include<stdio.h>
int main(){
    float percentage;
    printf("Enter your percentage\n");
    scanf("%f",&percentage);
    if(percentage >= 90 && percentage <=100){
        printf("Grade: A\n");
    }else if(percentage >= 80 && percentage < 90){
        printf("Grade;B\n");
    }else if(percentage >= 20 && percentage < 80){
        printf("Grade:C\n");
    }else if(percentage >= 0 && percentage < 20){
        printf("Grade;F\n");

    }else{
        printf("Invalid Percentage");
    }
    return 0;
    
}