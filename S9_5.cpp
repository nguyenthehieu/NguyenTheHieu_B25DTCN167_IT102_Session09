#include <stdio.h>

int main() {
    int n, i, count_even = 0, count_odd = 0;

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
    }

    printf("\nCac so chan la: ");
    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            count_even++;
            printf("%d ", array[i]);
        }
    }
    
    printf("\nCac so le la: ");
    for (i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            count_odd++;
            printf("%d ", array[i]);
        }
    }
    printf("\n\nTong so chan = %d\n", count_even);
    printf("Tong so le = %d\n", count_odd);

    return 0;
}

