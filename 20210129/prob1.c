#include <stdio.h>

int main()
{
    int arr[3][9];
    int i, j;

    for(i=0;i<9;i++)
    {
        arr[0][i] = 2 * (i+1);
        arr[1][i] = 3 * (i+1);
        arr[2][i] = 4 * (i+1);
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
