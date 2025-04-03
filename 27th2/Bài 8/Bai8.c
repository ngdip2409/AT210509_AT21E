#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, dientich, nuachuvi;

    //nhập ba số
    printf("Nhap ba so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    //kiểm tra có phải tam giác không
    if (a + b > c && a + c > b && b + c > a) {
        printf("Day la tam giac ");

        //kiểm tra loại tam giác
        if (a == b && b == c) {
            printf("deu\n");
        }
        else if (a == b || b == c || a == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                printf("vuong can\n");
            } else {
                printf("can\n");
            }
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("vuong\n");
        }
        else {
            printf("thuong\n");
        }

        //tính diện tích và chu vi
        nuachuvi = (a + b + c) / 2;
        dientich = sqrt(nuachuvi * (nuachuvi - a) * (nuachuvi - b) * (nuachuvi - c));

        //in ra kết quả
        printf("Chu vi tam giac bang %.2f\n", nuachuvi * 2);
        printf("Dien tich tam giac bang %.2f\n", dientich);
    }
    else {
        printf("Ba canh khong tao thanh tam giac!\n");
    }

    return 0;
}
