#include<stdio.h>
struct student{
    int rn;
    float marks;
};
int main(){
    struct student s;
    s.rn=107;
    s.marks=90.5;
    printf("%d\n", s.rn);
    printf("%f\n", s.marks);
}