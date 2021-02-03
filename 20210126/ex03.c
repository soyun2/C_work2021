#include <stdio.h>

void main()
{
    int num = 8;
    int *pnum;
    pnum = &num;

    printf("가리키는 값 \n");
    printf("*pnum = %d\n",*pnum);
    printf("가지고 있는 값\n");
    printf("pnum = %d",pnum);
}