#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, m, d;
    printf("Vui long nhap nam: ");
    scanf("%d", &y);
    printf("\nNhap thang: ");
    scanf("%d", &m);
    switch  (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThang %d nam %d co %d ngay", m, y, 31);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThang %d nam %d co %d ngay", m, y, 30);
        break;
    case 2:
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        {
            d = 29;
        }
        else
        {
            d = 28;
        }
        printf("\nThang %d nam %d co %d ngay", m, y, d);
        break;
    default:
        printf("\nSo khong hop le");
        scanf("%d", &m);
    }
    return 0;
}
