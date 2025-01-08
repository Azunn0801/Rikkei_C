#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct students{
        int id;
        char name[20];
        int age;
        char phonenumber[11];
    };
    struct students no[50];

    for(int i = 0; i < 5; i++){
        no[i].id = i + 1;

        printf("Nhap ho va ten sinh vien %d: ", i + 1);
        fgets(no[i].name, 20, stdin);

        printf("\nNhap tuoi sinh vien %d: ", i + 1);
        scanf("%d", &no[i].age);
        fflush(stdin);

        printf("\nNhap so dien thoai sinh vien %d: ", i + 1);
        fgets(no[i].phonenumber, 11, stdin);
        fflush(stdin);
    }

    for(int i = 0; i < 5; i++){
        printf("\nID sinh vien %d: %s", i + 1, no[i].id);
        printf("\nHo ten sinh vien %d: %s", i + 1, no[i].name);
        printf("\nTuoi sinh vien %d: %d", i + 1, no[i].age);
        printf("\nSo dien thoai sinh vien %d: %s\n", i + 1, no[i].phonenumber);
    }

    return 0;
}
