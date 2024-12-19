#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[3][3] = {3, 4, 5, 6, 2, 1, 9, 8, 7}, sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 2) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("Tong duong cheo phu la: %d", sum);
    return 0;
}
