#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array aelements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
