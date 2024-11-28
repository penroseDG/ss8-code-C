#include<stdio.h> 

int main(){
    int sum = 0;
    int tb = 0;   
    int array[5];
    printf("Nhap 5 phan tu vao mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++) {
        sum += array[i];
            tb = sum / 5;

    }
    printf("Tong = %d, Trung binh cong = %d\n", sum, tb);
    
    return 0;  
}

