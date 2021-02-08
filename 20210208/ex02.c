#include <stdio.h>

void main()
{
    int a=20;
    void *vp = &a;
    
    printf("&a = %d\n", &a);
    printf("vp = %d\n", vp);
}