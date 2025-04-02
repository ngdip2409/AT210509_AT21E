#include <stdio.h>

int main() {
    int a,b;
    int tong, hieu, tich, thuong, sodu;

    //nhập vào 2 số nguyên
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);

    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);

    //tính toán
    tong = a + b;
    hieu = a - b;
    tich = a * b;

    //in kết quả
    printf("\nKet qua cac phep tinh:\n");
    printf("Cong: %d + %d = %d\n", a, b, tong);
    printf("Tru: %d - %d = %d\n", a, b, hieu);
    printf("Nhan: %d * %d = %d\n", a, b, tich);

     //kiểm tra phép chia
        if (b != 0) {
        thuong = a / b;
        sodu = a % b;
        printf("Chia: %d / %d = %d (du %d)\n", a, b, thuong, sodu);
    }
    else {
        printf("Loi: Khong the chia cho 0!\n");
    }

return 0;
}
