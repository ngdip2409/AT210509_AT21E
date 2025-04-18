#include <stdio.h>

int main() {
    double gdp, tocdotangtruong;
    int nam = 2014;

    printf("Nhap tong thu nhap GDP nam 2014 (ty USD): "); scanf("%lf", &gdp);

    printf("Nhap toc do tang truong kinh te trung binh (&): "); scanf("%lf", &tocdotangtruong);

    printf("\nNam\t \tGDP\n");
    printf("%d\t\t%.2lf\n", nam, gdp);

    //lặp lại cho đến khi GDP gấp đôi năm 2014
    while (gdp <= 2 * 125.0) {
        gdp = gdp * (1 + tocdotangtruong / 100.0);
        nam++;
        printf("%d\t\t%.2lf\n", nam, gdp);
    }
    return 0;
}
