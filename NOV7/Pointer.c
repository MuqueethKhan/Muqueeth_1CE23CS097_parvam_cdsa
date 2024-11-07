#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    int b=*ptr;
    printf("%d\n",b);
    printf("%d\n", ptr);
    printf("%p\n", ptr);
    printf("%X\n", ptr);
}