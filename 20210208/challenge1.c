#include <stdio.h>

void turn(int *arr)
{
    int *p = arr;
    int brr[4][4] = {0,};
    int i,j,k;

    for(j=3;j>=0;j--)
    {
        for(i=0;i<4;i++)
        {
            for(k=0;k<4;k++)
            brr[j][i] = (arr[i]+k);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
        {
            printf("%4d", brr[i][j]);
        }
    }
    
}

void main()
{
    int i,j;
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    turn(arr[0]);
}