#include <stdio.h>

int main() {
    int i;
        printf("Cac so duong chan tu 1 den 20: \n");
        for (i = 1; i <= 20; i++) {
            if (i % 2 == 0) {
                printf("%d\t", i);
            }
        }
    return 0;
}
