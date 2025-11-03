#include <stdio.h>

int main(){
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu khong hop le.\n");
        return 0;
    }

    int array[n];
    for(i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang la: ");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}

