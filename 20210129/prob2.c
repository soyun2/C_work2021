#include <stdio.h>

void main()
{
    int A[2][4] = {{1,2,3,4},{5,6,7,8}};
    int B[4][2] = {};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            B[i][j] = A[j][i];
        }
    }
    printf("A행렬 \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("B행렬 \n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}