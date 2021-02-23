#include <stdio.h>
#include <stdlib.h>

static int a = 10; //데이터 영역 공간에 할당

void doA()
{
    a = 20;
}

void main()
{
    a = 30;
    int b = 20; //stack영역
    int c = 30; //stack영역

    void *ptr1 = malloc(4);
    void *ptr2 = malloc(8);

    printf("ptr1 = %d\n", ptr1);
    printf("ptr2 = %d\n", ptr2);

    free(ptr1);
    free(ptr2);
}