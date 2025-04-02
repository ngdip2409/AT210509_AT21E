#include <stdio.h>

int main() {
    float diem;

    //nhập điểm
        printf("Nhap diem: ");
        scanf("%f", &diem);

    //kiểm tra xếp loại
        if (diem < 0 || diem > 10) {
            printf("Diem khong hop le!");
        }
        else if (diem < 5) {
            printf("Xep loai Yeu");
        } 
        else if (diem < 7) {
            printf("Xep loai TB");
        }
        else if (diem < 8) {
            printf("Xep loai Kha");
        }
        else if (diem < 9) {
            printf("Xep loai Gioi");
        } 
        else {
            printf("Xep loai Xuat sac");
        }

return 0;
}