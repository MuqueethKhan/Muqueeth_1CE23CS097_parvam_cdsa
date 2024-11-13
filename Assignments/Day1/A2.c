#include <stdio.h>

int main() {
    float floatv;
    printf("Enter a floating-point number: ");
    scanf("%f", &floatv);
    int integer=(int)floatv;
    printf("%.2f\n", floatv);
    printf("%d\n", integer);
    return 0;
}