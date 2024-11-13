#include <stdio.h>

int main() {
    char op;
    char string[100], line[100];
    
    scanf("%c",  op);
    scanf("%s", string);
    getchar();
    scanf("%[^\n]%*c", line);
    printf("%c\n", op);
    printf("%s\n", string);
    printf("%s\n", line);
    
    return 0;
}