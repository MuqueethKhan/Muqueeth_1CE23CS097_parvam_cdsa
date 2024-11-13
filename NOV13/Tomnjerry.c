#include<stdio.h>
int isSufficient(int n, int arr[], int enough){
    if(n==0){
        return -1;
    }
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
        if(total>=enough){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int r, n, units;
    printf("Enter value of rats, size fo array and units of food: ");
    scanf("%d %d %d", &r, &n, &units);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int enough=r*units;
    printf("%d ", isSufficient(n,arr,enough));
}