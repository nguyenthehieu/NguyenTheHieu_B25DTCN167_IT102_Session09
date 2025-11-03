#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu khong hop le.\n");
        return 0;
    }

    int array[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    float average = sum / n;
    printf("Gia tri trung binh: %.2f\n", average);

    return 0;
}

