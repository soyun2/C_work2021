#include <stdio.h>

int recursive();
void main()
{
    int n;
    printf("정수 입력: ");
    scanf("%d",&n);
    printf("2의 %d승은 %d",n,recursive(n));
}

int recursive(int n)
{
    if(n==0)
        return 1;
    else
        return 2 * recursive(n-1);
}