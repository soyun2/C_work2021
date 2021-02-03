#include <stdio.h>

int SquareByValue(int num)
{
    printf("%d\n" ,num * num);
}

int SquareByReference(int *ptr)
{
    int num = *ptr;
    *ptr = num*num;
    printf("%d\n", *ptr);
}

int main()
{
    int num = 3;
    SquareByValue(num);
    SquareByReference(&num);
}