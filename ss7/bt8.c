#include <stdio.h>
int main() {
    int soHang, soCot;
    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);
    int mang[soHang][soCot];
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("Ma tran nhap vao:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}

