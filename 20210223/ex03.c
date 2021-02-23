#include <stdio.h>
#include <stdlib.h>

char *ReadUserName(void)
{
    char *name = (char *)malloc(sizeof(char)*30);
    printf("이름을 입력하세요  ");
    scanf("%s", name);
    return name;
}

int main(void)
{
    char *name1 = ReadUserName();
    char *name2 = ReadUserName();

    printf("*name1 = %s\n", name1);
    printf("*name2 = %s\n", name2);
}