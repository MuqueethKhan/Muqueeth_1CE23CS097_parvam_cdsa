#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *dynamic=(int *)malloc(n*sizeof(int));
    printf("Enter the stack elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &dynamic[i]);
    }
    int extra;
    printf("Enter the extra memory to be allocated: ");
    scanf("%d", &extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));
    printf("Enter the array elements:\n");
    for(int i=n;i<(n+extra);i++){
        scanf("%d", &dynamic[i]);
    }
    printf("Printing array elements:\n");
    for(int i=0;i<(n+extra);i++){
        printf("%d   ", dynamic[i]);
    }
}