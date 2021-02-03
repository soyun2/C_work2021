#include <stdio.h>

void odd(int* arr)
{
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) % 2 == 1)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void even(int* arr)
{
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) % 2 == 0)
            printf("%d ", arr[i]);
    }
}


void main()
{
    int arr[10];
    int i = 0;

    printf("총 10개의 숫자 입력\n");

    for (i = 0;i<10;i++)
    {
        printf("입력%d : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("홀수 출력 : ");
    odd(arr);
    printf("짝수 출력 : ");
    even(arr);
}