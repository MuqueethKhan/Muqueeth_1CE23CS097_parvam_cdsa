#include<stdio.h>
int main(){ 
    int r,c;
    printf("Enter row size: ");
    scanf("%d",&r);
    printf("Enter column size: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of 2D Array:::\n");
    for(int i=0;i<r;i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for (int j = 0; j < c; j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}