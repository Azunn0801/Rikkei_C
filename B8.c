#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev_Str(char *str, char *rev_str)
{
    strcpy(rev_str, strrev(str));
}

int main()
{
    char inputString[] = "", reverseString[] = "";
    printf("Vui long nhap chuoi can dao nguoc: ");
    fgets(inputString, 20, stdin);
    rev_Str(inputString, reverseString);
    printf("%s", reverseString);
    return 0;
}
