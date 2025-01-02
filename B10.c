#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int count_chr[200] = {0};

    printf("Nhap chuoi bat ki: ");
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++){
        count_chr[(int)str[i]]++;
    }
    for(int i = 48; i <= 122; i++){
        if((i >= 58 && i <= 64) || (i >= 91 && i <= 96)){
            continue;
        }
        if(count_chr[i] > 0){
            printf("\n%c: %d", (char)i, count_chr[i]);
        }
    }
    return 0;
}
