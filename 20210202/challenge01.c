#include <stdio.h>

void change(int arr);

void main()
{
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i, j;
    for(i = 0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    change(arr);
}

int change(int *arr)
{
    int i, j;
    int brr[4][4]={0,};
    for(i = 0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            brr[i][j] = arr[3-i][3-j];
        }
    }

    for(i = 0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ", brr[i][j]);
        }
        printf("\n");
    }
}
