#include <stdio.h>
void transpose(int n, int matrix[][n]){
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    printf("Transposed matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    transpose(n, matrix);
}