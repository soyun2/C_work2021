#include <stdio.h>

int binary(int num)
{
    int left[100];
    int b = 0;

    while (num > 0)
    {
        left[b] = num % 2;
        num /= 2;
        b++;
    }
    
    for (int i = 0; i < b; i++)
    {
        printf("%d ", left[b - 1 - i]);
    }
}

void main()
{
    int num;
    printf("10진수 정수 입력 : ");
    scanf("%d", &num);
    binary(num);
}
