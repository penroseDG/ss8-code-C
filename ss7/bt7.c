#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d (so le): ", i + 1);
        scanf("%d", &arr[i]);
        while (arr[i] % 2 == 0) {
            printf("Phan tu phai la so le, vui long nhap lai: ");
            scanf("%d", &arr[i]);
        }
    }
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

