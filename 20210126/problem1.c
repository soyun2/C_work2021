#include <stdio.h>

void main()
{
    int a, b, j, temp=0;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for(a;a<b+1;a++)
    {
        for(j=1;j<10;j++)
        {
            printf("%d x %d = %d\n",a,j,a*j);
        }
        printf("\n");
    }

}