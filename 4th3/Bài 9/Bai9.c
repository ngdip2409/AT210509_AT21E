#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so n: "); scanf("%d", &n);

    double tong = 1.0, t = 1.0;
    for (int i = 1; i <= n; i++) {
        t*= i;
        tong += 1.0 / giaithua;
    }

    printf("Tong S = %.5f", tong);
    return 0;
}

