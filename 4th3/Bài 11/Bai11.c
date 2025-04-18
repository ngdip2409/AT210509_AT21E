#include <stdio.h>

int main() {
    int n, nhiphan[32], batphan[100];
    int i = 0, k = 0, h = 0;  // i: nhị phân, k: bát phân
    char thapluc[100];

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen duong!");
        return 1;
    }

    int temp = n;

    // Nhị phân
    if (n == 0) {
        printf("So 0 o dang nhi phan la 0, o dang bat phan la 0 va o dang thap luc phan la 0\n");
    } else {
        while (n > 0) {
            nhiphan[i] = n % 2;
            n /= 2;
            i++;
        }

        printf("So %d o dang nhi phan la ", temp);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", nhiphan[j]);
        }
        printf("\n");
    }

    n = temp;  // khôi phục lại giá trị n để đổi sang bát phân

    // Bát phân
    while (n != 0) {
        batphan[k] = n % 8;
        n = n / 8;
        k++;
    }

    printf("So %d o dang bat phan la ", temp);
    for (int j = k - 1; j >= 0; j--) {
        printf("%d", batphan[j]);
    }
    printf("\n");

    n = temp; // khôi phục lại lần nữa

    // Thập lục phân
    while (n != 0) {
        int du = n % 16;
        if (du < 10) {
            thapluc[h] = du + '0'; // chuyển số thành ký tự
        } else {
            thapluc[h] = du - 10 + 'A'; // chuyển thành A-F
        }
        n = n / 16;
        h++;
    }

    printf("So %d o dang thap luc phan la ", temp);
    for (int j = h - 1; j >= 0; j--) {
        printf("%c", thapluc[j]);
    }

    return 0;
}
