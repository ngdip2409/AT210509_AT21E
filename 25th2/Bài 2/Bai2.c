#include <stdio.h>

int main() {
    int ngay, thang, nam;

    //nhập ngày tháng năm từ bàn phím
    printf("Nhap ngay: ");
    scanf("%d", &ngay);

    printf("Nhap thang: ");
    scanf("%d", &thang);

    printf("Nhap nam: ");
    scanf("%d", &nam);

    //xuất ra màn hình
    printf("Hom nay la %02d/%02d/%04d\n",ngay, thang, nam);


return 0;
}
