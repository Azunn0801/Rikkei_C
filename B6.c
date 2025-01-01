#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    char str[] = "hello world";
    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
