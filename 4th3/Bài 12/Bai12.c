#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sinx, eps;
    int n = 0;

    printf("Nhap gia tri x (radian): ");
    scanf("%lf", &x);

    printf("Nhap do chinh xac Eps: ");
    scanf("%lf", &eps);

    term = x; //
    sinx = 0.0;

    while (fabs(term) > eps) {
        sinx += term;
        n++;
        term = term * (-1) * x * x / ((2 * n) * (2 * n + 1));
    }

    printf("Gia tri sin(%.6lf) ~ %.10lf\n", x, sinx);
    return 0;
}
