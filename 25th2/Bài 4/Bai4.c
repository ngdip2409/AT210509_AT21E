#include <stdio.h>

int main() {
float bankinh, dientich, thetich;
float pi = 3.14;

//nhập bán kính
    printf("Nhap ban kinh hinh cau: ");
    scanf("%f", &bankinh);

//tính diện tích và thể tích
    dientich = 4 * pi * bankinh * bankinh;
    thetich = (4.0 / 3.0) * pi * bankinh * bankinh * bankinh;

//in ra màn hình
    printf("Dien tich hinh cau la: %.2f\n", dientich);
    printf("The tich hinh cau la: %.2f\n", thetich);

return 0;
}
