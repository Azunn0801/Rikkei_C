#include <stdio.h>
#include <stdlib.h>

int a = 6;
int b = 901;
int cong, tru, nhan, chia;

int main()
{
    cong = a + b;
    tru = a - b;
    nhan = a * b;
    chia = a / b;
    printf("%d\n", cong);
    printf("%d\n", tru);
    printf("%d\n", nhan);
    printf("%d\n", chia);
    return 0;
}
