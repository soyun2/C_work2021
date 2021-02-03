#include <stdio.h>

void MaxAndMin(int arr[], int**maxPtr, int **minPtr)
{
    int *max;
    int *min;
    max = min = &arr[0];

    for(int i=0;i<5;i++)
    {
        if(*min>arr[i])
            min = &arr[i];
        if(*max<arr[i])
            max = &arr[i];
    }

    *maxPtr = max;
    *minPtr = min;

    printf("%d\t", *maxPtr);
    printf("%d\n", *minPtr);
    printf("%d\t", **maxPtr);
    printf("%d\n", **minPtr);
}

void main()
{
    int * maxPtr;
    int * minPtr;
    int arr[5];

    for(int i=0; i<5;i++)
    {
        scanf("%d", &arr[i]);
    }

    MaxAndMin(arr, &maxPtr, &minPtr);

}