#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    int ucln = gcd(a, b);
    int bcnn = (a * b) / ucln;

    printf("Uoc chung lon nhat = %d\n", ucln);
    printf("Boi chung nho nhat = %d\n", bcnn);
    return 0;
}
