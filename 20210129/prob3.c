#include <stdio.h>

void main()
{
    int arr[5][5]={};

    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            arr[i][4] += arr[i][j];
            arr[4][j] += arr[i][j];
        }
    }

    for(int i=0; i<4;i++)
    {
        arr[4][4] += arr[4][i];
    }

    printf("\n");
    for(int i=0;i<5;i++)
    {        
        for(int j=0; j<5; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}