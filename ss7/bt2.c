#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("\nDo dai cua mang: %d\n", length);
    return 0;
}

