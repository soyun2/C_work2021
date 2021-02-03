#include <stdio.h>
#include <string.h>

int check(char str[], int len)
{
    for(int i=0;i<len/2;i++)
    {
        if(str[i]==str[len-1-i])
        {
            return 0;              
        }
    }
}

void main()
{
    int len, pal;
    char str[100];

    printf("문자열 입력: ");
    scanf("%s", &str);
    len = strlen(str);
    pal = check(str,len);

    if(pal != 0)
        printf("회문이 아닙니다.");
    else
        printf("회문입니다");
    
}