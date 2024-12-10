#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;
int r = 3;
float s, p;

int main()
{
    s = r * r * PI;
    p = r * 2 * PI;
    printf("Dien tich hinh tron la %.2f\n", s);
    printf("Chu vi hinh tron la %.2f", p);
    return 0;
}
