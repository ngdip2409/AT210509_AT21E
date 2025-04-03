#include <stdio.h>

int main() {
    int thang, nam, songay;

    //nhập vào tháng và năm
    printf("Nhap thang: ");
    scanf("%d", &thang);

    printf("Nhap nam: ");
    scanf("%d", &nam);

    //tính số ngày
    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le!\n");
    }
    else {
            if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
                songay = 31;
            }
            else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
                songay = 30;
            }
            else {
            //kiểm tra năm nhuận
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                    songay = 29;
                }
                else {
                    songay =28;
                }
            }
    //in ra
    printf("Thang %d nam %d co %d ngay.\n", thang, nam, songay);

    }

return 0;
}
