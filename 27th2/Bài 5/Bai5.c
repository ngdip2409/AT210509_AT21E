#include <stdio.h>

int main() {
    float a, b , c , delta , x1 , x2 , phanthuc , phanao ;

//nhập từ bàn phím
    printf("Nhap he so a, b, : ");
    scanf("%f %f %f", &a, &b, &c);

//kiểm tra hệ số
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        }
        else {
            x1 = -c / b;
            printf("Phuong tỉnh bac nhat co nghiem x  %.2f\n", x1);
        }
    } else {
        //tính delta
        delta = b * b - 4 * a * c;

        //xét delta
            if (delta > 0) {
                x1 = ( -b + sqrt(delta)) / ( 2 * a );
                x2 = ( -b - sqrt(delta)) / ( 2 * a );
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1 ) ;
            printf("x2 = %.2f\n", x2) ;
            }
            else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
        } else {
            phanthuc = -b / (2 * a);
            phanao = sqrt(-delta) / (2 * a);
            printf("Phuong trinh co hai nghiem phuc:\n");
            printf("x1 = %.2f + %.2fi\n", phanthuc, phanao );
            printf("x2 = %.2f - %.2fi\n", phanthuc, phanao );
        }
    }
return 0;
}
