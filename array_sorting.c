#include<stdio.h>
int main(){
    int arr[100],n,temp;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter %d elements : \n",n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // bubble sort
    for(int i =0;i<n;i++){
        for(int j= 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array :\n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    return 0;
}