#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}