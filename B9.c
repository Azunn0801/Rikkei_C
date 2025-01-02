#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "hello world", c;
    printf("Nhap ki tu can xoa: ");
    scanf("%c", &c);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            continue;
        }
        else{
            printf("%c", str[i]);
        }
    }
    return 0;
}
