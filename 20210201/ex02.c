#include <stdio.h>

void swap1(int *pnum1, int *pnum2)
{
    printf("pnum1 = %d, pnum2 = %d\n",pnum1,pnum2);
    int *temp = pnum1;
    pnum1 = pnum2;
    pnum2 = temp;
    printf("pnum1 = %d, pnum2 = %d\n", pnum1, pnum2);
}

void swap2(int **ppnum1, int **ppnum2)
{
    int *temp = *ppnum1;
    *ppnum1 = *ppnum2;
    *ppnum2 = temp;
}

void main()
{
    int num1 = 10, num2 = 20;
    int *p1 = &num1, *p2 = &num2;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap1(p1, p2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    swap2(&p1, &p2);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
}