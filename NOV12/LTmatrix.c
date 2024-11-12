#include<stdio.h>
int isLower(int n, int matrix[][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){ 
                if(matrix[i][j]!=0){
                    return 0;
                }
        }
    }
}
int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter matrix elements: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    if(isLower(n,matrix)){
        printf("It is a lower triangular matrix");
    }
    else{
        printf("It is not a lower triangular matrix");
    }
}
