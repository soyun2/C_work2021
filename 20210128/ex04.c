#include <stdio.h>

void doA(int *p)
{
    printf("*p = %d\n",*p);
    *p = 20;
}

void main()
{
    int arr[3] = {1,2,3};
    int i=0;
    for(;i<3;i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    doA(arr);
    for(i=0;i<3;i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}