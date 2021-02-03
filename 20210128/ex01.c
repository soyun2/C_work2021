#include <stdio.h>

int main(void)
{
    char a[] = "abc";
    char *b = "abc";

    printf("%s %s \n", a, b);

    b = "abcd";
    printf("%s %s \n", a, b);

    a[0] = 'A';
    
    printf("%s %s \n", a, b);
    return 0;
}