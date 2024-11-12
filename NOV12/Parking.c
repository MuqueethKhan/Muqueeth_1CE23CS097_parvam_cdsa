#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the rows: ");
    scanf("%d", &m);
    printf("Enter the columns: ");
    scanf("%d", &n);
    int M[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &M[i][j]);
        }
    }
    int max=0;
    int index=-1;
    for(int i=0;i<m;i++){
        int c=0;
        for(int j=0;j<n;j++){ 
            if(M[i][j]==1){
                c++;
            }            
        }
        if(c>max){
            max=c;
            index=i;
        }
    }
    printf("%d", index+1);

}