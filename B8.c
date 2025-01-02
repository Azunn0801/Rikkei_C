#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Nhap chuoi bat ki: ");
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++){
        if((i == 0 && str[i] != ' ') || (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')){
            str[i + 1] -= 32;
        }
    }
    printf("\n");
    puts(str);
    return 0;
}
