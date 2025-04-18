#include <stdio.h>
#include <math.h>

int main() {
    double x, eps, term, kq;
    int n;

    printf("Nhap gia tri x: "); scanf("%lf", &x);
    printf("Nhap do chinh xac: "); scanf("%lf", &eps);

    kq = 1.0;
    term = 1.0;
    n = 1;

    while (fabs(term) >= eps) {
        term = term * x / n; // tính term tiếp theo
        kq += term;
        n++;
    }
    printf("e mu %.10lf = %.10lf", x, kq);

    return 0;
}
