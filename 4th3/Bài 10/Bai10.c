#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap n: "); scanf("%d", &n);

    if (n == 0) {
        printf("f(0) = 0\n");
    } else if (n == 1) {
        printf("f(1) = 1\n");
    } else {
        long long f0 = 0, f1 = 1, fn;
        for (i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        printf("f(%d) = %lld\n", n, fn);
    }

    return 0;
}

