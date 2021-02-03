#include <stdio.h>

void main()
{
    int a = 10;

    printf("a = %d\n", a);
    printf("&a = %d\n", &a);
    
    char b = 'A';
    
    printf("b = %c\n", b);
    printf("&b = %d\n", &b);

    int c[3]={1,2,3};
    printf("&c[0] = %x\n", &c[0]);
    printf("&c[1] = %x\n", &c[1]);
    printf("&c[2] = %d\n", &c[2]);

    printf("&c[0] = %x\n", c[0]);
    printf("&c[1] = %x\n", c[1]);
    printf("&c[2] = %d\n", c[2]);
}  