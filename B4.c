#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c = 0;
    char find_c;
    char str[] = "abcd1234";
    printf("Moi nhap ky tu can tim: ");
    scanf("%c", &find_c);
    for(int i = 0; i < strlen(str); i++){
        if(find_c == str[i]){
            c++;
        }
    }
    printf("\nKy tu %c co %d lan xuat hien", find_c, c);
    return 0;
}
