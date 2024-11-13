#include <stdio.h>
#include <ctype.h>

void convertCase(char ch){
    if(isalpha(ch)){
        if(islower(ch)){
            printf("%c\n", toupper(ch));
        } 
        else {
            printf("%c\n", tolower(ch));
        }
    }
    else{
        printf("Invalid input\n");
    }
}
int main() {
    char ip;
    printf("Enter a single character: ");
    scanf(" %c", &ip);
    convertCase(ip);
    return 0;
}