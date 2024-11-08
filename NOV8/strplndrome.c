#include<string.h>
#include<stdio.h>
int ispalindrome(char str[]){
    int left=0,right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str[10];
    printf("Enter the string: ");
    scanf("%s", &str);
    if(ispalindrome(str)){
        printf("It's a palindrome\n");
    }
    else{
    printf("Not a palindrome\n");
}
}

