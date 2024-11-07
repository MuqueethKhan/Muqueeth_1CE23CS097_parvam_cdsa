#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    printf("%d\n  ", ptr);
    ptr+=2;
    printf("%d" , ptr);
}