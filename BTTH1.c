#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = '-';
    printf(" %-6s %-16s %-4s %-7s %-4s %-4s %-5s %-7s\n",
           "STT", "Ho va Ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Van", "Diem TB");
    printf("|%4s|%16s|%4s|%4s|%5s|%4s|%4s|%7s|\n", "-----", "-----------------", "----", "------", "-----", "----", "----", "--------");
    printf("|  1  | Nguyen Van A    | 7.5|  7.0 | 5.5 | 8.5| 7.5|     7.4|\n");
    printf("|%4s|%16s|%4s|%4s|%5s|%4s|%4s|%7s|\n", "-----", "-----------------", "----", "------", "-----", "----", "----", "--------");
    printf("|  1  | Nguyen Van A    | 7.5|  7.0 | 5.5 | 8.5| 7.5|     7.4|\n");
    printf("|%4s|%16s|%4s|%4s|%5s|%4s|%4s|%7s|\n", "-----", "-----------------", "----", "------", "-----", "----", "----", "--------");
    printf("|  2  | Nguyen Van B    | 7.0|  8.5 | 9.0 | 5.0| 6.5|     7.7|\n");
    printf("|%4s|%16s|%4s|%4s|%5s|%4s|%4s|%7s|\n", "-----", "-----------------", "----", "------", "-----", "----", "----", "--------");
    printf("|  3  | Nguyen Van C    | 6.5|  7.2 | 6.5 |10.0| 5.5|     7.2|\n");
    return 0;
}
