#include <stdio.h>

int main() {
    int n, i;
    float tong = 0.0;
    printf("Nhap so n: "); scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        tong += 1.0 / i;
    }

    printf("S = %.4f", tong);
    return 0;
}

