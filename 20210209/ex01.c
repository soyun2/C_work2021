#include <stdio.h>

void main()
{
    int ch1,ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin); //헤더 파일에 stdin 존재, fgetc는 엔터 키 입력

    putchar(ch1);
    fputc(ch2, stdout);

}