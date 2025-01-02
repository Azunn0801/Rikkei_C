#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, character = 0, special = 0;
    char str[100];
    printf("Nhap chuoi ki tu: ");
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            number++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            character++;
        }
        else{
            special++;
        }
    }
    printf("\nSo chu cai: %d", character);
    printf("\nSo chu so: %d", number);
    printf("\nSo ki tu dac biet: %d", special);
    return 0;
}
