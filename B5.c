#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3] = {3, 4, 5, 6, 2, 1, 9, 8, 7}, sum;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            if(i == 0 || i == 3 - 1 || j == 0 || j == 3 - 1)    sum += arr[i][j];
        }
        printf("\n");
    }
    printf("\nTong chi so nam o duong bien la: %d", sum);
    return 0;
}
