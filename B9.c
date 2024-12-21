#include <stdio.h>

int main() {
    printf("Cac so Armstrong co 3 chu so la: ");
    for (int i = 1; i <= 9; ++i) {
        for (int j = 0; j <= 9; ++j) {
            for (int k = 0; k <= 9; ++k) {
                int total = i * i * i + j * j * j + k * k * k;
                if (total == (i * 100 + j * 10 + k)) {
                    printf("%d ", total);
                }
            }
        }
    }
    return 0;
}
