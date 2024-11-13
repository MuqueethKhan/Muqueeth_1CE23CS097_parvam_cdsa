#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the values: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int elem;
    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=elem;
    for(int i=0;i<=n;i++){
        printf("%d ", arr[i]);
    }
}