#include <stdio.h>

int main() {
    float a , b , c , d , e , f;
    float D , Dx , Dy;
    float x , y;

    //nhập hệ số
        printf("Nhap he so a, b, c, d, e, f: ");
        scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    //tính định thức
        D = a * e - b * d;
        Dx = c * e - b * f;
        Dy = a * f - c * d;
    //kiểm tra định thức
        if (D == 0) {
            if (Dx == 0 && Dy == 0) {
                printf("He phuong trinh co vo so nghiem.\n");
            }
            else {
                printf("He phuong trinh vo nghiem.\n");
            }
        }
        else {
            //tính nghiệm
                x = Dx / D;
                y = Dy / D;

            //in ra
                printf("He phuong trinh co nghiem duy nhat:\n");
                printf("x = %.2f\n", x);
                printf("y = %.2f", y);
        }

return 0;
}