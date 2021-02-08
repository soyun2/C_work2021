#include <stdio.h>

int doA(int a)
{
    printf("do A 함수입니다.\n a = %d\n", a);
}

int doB(int a, int b)
{
    printf("do B 함수입니다.\n a = %d, b = %d", a, b);
}

void main()
{
    int (*a)(int);
    int (*b)(int, int);

    a = doA;
    b = doB;

    a(10);
    b(20, 30);
}