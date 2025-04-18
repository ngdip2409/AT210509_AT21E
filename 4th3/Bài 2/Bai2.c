#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i, v1, v2, count = 0;

    //nhập số n
    printf("Nhap vao so can kiem tra: "); scanf("%d", &n);


    if (n <= 1) {
        printf("%d khong phai la so nguyen to!", n);
        return 0;
    }

    v1 = ceil(sqrt(n));

    //kiểm tra xem có chia hết ko
    for (i = 2; i <= v1; i++) {
        if (n % i == 0) {
            count = 1;
            break; //chia hết nên không phải là số nguyên tố
        }
    }
    //kiểm tra có phải là số nguyên tố không
    if (count == 0)
        printf("%d la so nguyen to!", n);
    else
        printf("%d khong phai la so nguyen to!", n);

    return 0;
}
