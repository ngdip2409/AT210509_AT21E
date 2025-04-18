#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Nhap so nguyen n: "); scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n) printf("%d la so hoan hao!", n);
    else printf("%d khong phai la so hoan hao!", n);

    return 0;
}
