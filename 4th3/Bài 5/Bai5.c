#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap vao so n: "); scanf("%d", &n);

    //in ra cac uoc
    printf("Cac uoc cua %d la ", n);

    for (i = 1; i <= n; i++) {
       if (n % i == 0)
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
