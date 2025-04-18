#include <stdio.h>

int main() {
    int i, n;
    long long giaithua = 1;
    printf("Nhap so n: "); scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        giaithua *= i;
    }

    printf("%d! = %lld\n", n, giaithua);
    return 0;
}

