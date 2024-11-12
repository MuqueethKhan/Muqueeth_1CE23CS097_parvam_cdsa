#include <stdio.h>

int main() {
    
    int r, c;
    printf("Enter number of r and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c], transpose[r][c];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("Transposed matrix is:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}