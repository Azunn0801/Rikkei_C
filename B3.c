#include <stdio.h>
#include <stdlib.h>

int main()
{
    int check = 1;
    const char s[8] = "78787878";
    char pw[8 + 1] = "";
    printf("Yeu cau nhap mat khau 8 chu so: ");
    scanf("%s", pw);
    for(int i = 0; i <= 7; ++i)
    {
        if(s[i] != pw[i])
        {
            check = 0;
            break;
        }
    }
    if(check == 1) printf("\nDung mat khau");
    else printf("\nSai mat khau");
    return 0;
}
