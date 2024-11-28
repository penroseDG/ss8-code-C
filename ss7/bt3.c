#include <stdio.h>
int main() {
    int arr[5] = {11, 15, 27, 25, 3};
    int daTimThay = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("arr[%d] = %d\n", i, arr[i]);
            daTimThay = 1;
        }
    }
    if (!daTimThay) {
        printf("Mang khong chua so chan.\n");
    }
    return 0;
}

