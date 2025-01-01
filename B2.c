#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "abcd1234";
    for(int i = 0; i < strlen(str); i++){
        printf("%c ", str[i]);
    }
    return 0;
}
