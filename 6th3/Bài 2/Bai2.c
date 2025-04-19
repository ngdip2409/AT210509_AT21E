#include <stdio.h>

int main() {
    int arr[10];
    printf("Nhap 10 so nguyen: ");
    for(int i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nMang dao nguoc: ");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
