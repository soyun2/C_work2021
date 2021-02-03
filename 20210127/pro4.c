#include <stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int *p = arr;
    int *p2 = &arr[5];
    int i=0;

    for(i=0;i<6;i++)
    {
        *(p+i) = (*p2 - i);
    }

    for(i=0; i<6; i++)
    {
        printf("%d \n", arr[i]);
    }
    
}