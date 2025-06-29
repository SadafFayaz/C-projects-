#include <stdio.h>


int factorial(int n) {
    int fact = 1;
    printf("%d! = ", n);
    for (int i = n; i >= 1; i--) {
        fact *= i;
        printf("%d", i);
        if (i != 1)
            printf(" × ");
    }
    printf(" = %d\n", fact);
    return fact;
}

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial(number);  
    }

    return 0;
}