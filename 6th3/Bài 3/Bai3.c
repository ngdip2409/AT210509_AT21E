#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n], sum = 0, sumPos = 0, sumNeg = 0, countPos = 0, countNeg = 0;

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
        if(arr[i] > 0) {
            sumPos += arr[i];
            countPos++;
        } else if(arr[i] < 0) {
            sumNeg += arr[i];
            countNeg++;
        }
    }

    printf("\nTong cac phan tu: %d\n", sum);
    printf("Tong cac so duong: %d\n", sumPos);
    printf("Tong cac so am: %d\n", sumNeg);
    printf("Trung binh cong toan bo: %.2f\n", (float)sum / n);
    if(countPos > 0)
        printf("Trung binh cong so duong: %.2f\n", (float)sumPos / countPos);
    if(countNeg > 0)
        printf("Trung binh cong so am: %.2f\n", (float)sumNeg / countNeg);

    return 0;
}
