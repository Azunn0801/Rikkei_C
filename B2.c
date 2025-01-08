#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct students{
    char name[20];
    int age;
    char phonenumber[11];
    };
    struct students no1;
    printf("Nhap ho va ten: ");
    fgets(no1.name, 20, stdin);
    printf("\nNhap tuoi: ");
    scanf("%d", &no1.age);
    fflush(stdin);
    printf("\nNhap so dien thoai: ");
    fgets(no1.phonenumber, 11, stdin);
    printf("\nHo ten sinh vien: %s", no1.name);
    printf("\nTuoi sinh vien: %d", no1.age);
    printf("So dien thoai sinh vien: %s", no1.phonenumber);
    return 0;
}
