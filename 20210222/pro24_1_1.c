#include <Stdio.h>

int main()
{
    FILE *fp=fopen("mystroy.txt","wt");
    
    char name[40];
    printf("이름을 입력하세요. ");
    fgets(name, sizeof(name), stdin);
    printf("name = %s", name);
    fputs("#이름 :",fp);
    fputs(name, fp);

}