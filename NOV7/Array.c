#include<stdio.h>
int main(){
    int arr[]={1,27,85,23,102,87};
    printf("%d\n ",arr);
    printf("%d\n ",&arr[1]);
    printf("%d\n ",arr[0]);
    for(int i=1;i<6;i++){
    printf("%d\n ",arr[i]);
    }
}