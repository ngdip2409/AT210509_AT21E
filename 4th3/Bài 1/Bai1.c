#include <stdio.h>
int main() {
    int i, n, sum = 0;
    printf("Nhap 10 so nguyen bat ky: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("Tong cua 10 so nguyen bat ky la %d", sum);

return 0;
}
