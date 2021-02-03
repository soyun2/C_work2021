#include <stdio.h>

void swap(int *a, int *b, int *c)
{
    int temp;

    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;   

    printf("%d %d %d", *a, *b, *c);
}

void main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    swap(&num1, &num2, &num3);
}