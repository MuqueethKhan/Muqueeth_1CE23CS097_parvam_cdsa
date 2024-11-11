

#include <stdio.h>

int main() {
    int n, rt;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &rt);
    rt = rt % n;
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i + rt) % n] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}