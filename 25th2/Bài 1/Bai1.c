#include <stdio.h>

int main() {
    float x;

    //nhập x
    printf("Nhap vao gia tri cua x: ");
    scanf("%f", &x);

    //in ra màn hình
    printf("Ket qua: \n");
    printf("x^2 = %.2f\n", x*x);
    printf("x^3 = %.2f\n", x*x*x);
    printf("x^4 = %.2f\n", x*x*x*x);

return 0;
}
