#include <stdio.h>
/*
void turn(int (*p)[4])
{
    int brr[4][4] = {0,};
    int i,j,k;

    for(j=3;j>=0;j--)
    {
        for(i=0;i<4;i++)
        {
            for(k=0;k<4;k++)
            brr[j][i] = arr[i][k];
        }
    }    
}
*/

void doChange(int (*arr)[4], int (*brr)[4])
{
    int i, j;
    int k = 3;
    for(i = 0;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            brr[j][k] = arr[i][j];
        }
        k--;
    }
}

void doPrint(int (*p)[4])
{
    int i, j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
        {
            printf("%4d", p[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int i,j;
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int brr[4][4];

    doPrint(arr);
    printf("\n");
    doChange(arr,brr);
    doPrint(brr);
    printf("\n");
    doChange(brr, arr);
    doPrint(arr);
}


