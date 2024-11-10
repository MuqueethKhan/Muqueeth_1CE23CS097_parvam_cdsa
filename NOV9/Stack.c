#include<stdio.h>
#define n 5
int top=-1;
int stack[n];
void push(){
    int elem;
    printf("Enter the element to be inserted: ");
    scanf("%d",&elem);
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top]=elem;
    }
}
void pop(){
    if(n==-1){
        printf("Stack Underflow");
    }
    else{
        top--;
    }
}
void peek(){
    if(n==-1){
        printf("Stack is empty");
    }
    else{
        printf("Top element: %d\n", stack[top]);
    }
}
void display(){
    if(n==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Stack elements are: \n");
        for(int i=top; i>=0;i--){
            printf("%d ", stack[i]);
        }
    }
}
int main(){
    int choice;
    do{
        printf("Enter your choice(1-PUSH/2-POP/3-PEEK/4-DISPLAY): ");
        scanf("%d", &choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default:printf("Invalid choice!!!");
        }
    }while(choice!=0);
}