#include <stdio.h>

int main() {
    double A, laisuat = 0.45;
    int i, sothang;

    printf("Nhap so tien gui tiet kiem ban dau (VND): "); scanf("%lf", &A);

    printf ("Nhap so thang gui tiet kiem: "); scanf("%d", &sothang);

    for (i = 0; i < sothang; i++) {
        A = A * (1 + laisuat / 100.0);
    }
    printf("So tien nhan duoc sau %d thang la %.2lf VND", sothang, A);

    return 0;
}
