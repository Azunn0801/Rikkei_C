#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Moi nhap so n ");
    scanf("%d", &n);
    char arr[n][n];
    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = '.';
                printf(" %c ", arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}
