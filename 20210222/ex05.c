#include <Stdio.h>

typedef struct fren
{
    char name[10];
    char sex;
    int age;
}Friend;

int main(void)
{
    FILE *fp;
    Friend myfriend1;
    Friend myfriend2;

    fp=fopen("friend.bin","wb");
    printf("이름, 성별, 나이 순 입력 : ");
    scanf("%s %c %d", myfriend1.name, &myfriend1.sex, &myfriend1.age);
    fwrite((void*)&myfriend1, sizeof(myfriend1), 1, fp);
    fclose(fp);
    getchar();

    fp=fopen("friend.bin","rb");
    if(fp == NULL)
    {
        printf("파일 열기 실패");
    }
    fread((void*)&myfriend2,sizeof(myfriend2), 1, fp);
    printf("%s %c %d\n", myfriend2.name, myfriend2.sex, myfriend2.age);
    fclose(fp);
    return 0;

}