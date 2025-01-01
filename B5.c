#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 1;
    char str[] = "hello world";
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
