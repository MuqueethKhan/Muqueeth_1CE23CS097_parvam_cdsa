#include<stdio.h>
int find(int n, int a, int b){
    while(n!=0){
        if((n%10!=a) && (n%10!=b)){
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main(){
    int a, b, range;
    printf("Enter value of a,b and range: ");
    scanf("%d %d %d", &a, &b, &range);
    for(int i=1;i<range;i++){
        if(find(i,a,b)){
            printf("%d ", i);
        }
    }
}