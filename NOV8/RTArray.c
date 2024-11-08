#include<stdio.h>
int main(){ 
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing array elements: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}