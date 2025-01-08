#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct students{
    char name[20];
    int age;
    char phonenumber[11];
    };
    struct students no1 = {"Nguyen Anh Dung", 19, "0327840179"};
    printf("Ho ten sinh vien: %s\n", no1.name);
    printf("Tuoi sinh vien: %d\n", no1.age);
    printf("So dien thoai sinh vien: %s", no1.phonenumber);
    return 0;
}
