#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxnum = 0, arr[3][3] = {3, 4, 5, 6, 2, 1, 9, 8, 7};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(maxnum < arr[i][j])
            {
                maxnum = arr[i][j];
            }
        }

    }
    printf("%d", maxnum);
    return 0;
}
