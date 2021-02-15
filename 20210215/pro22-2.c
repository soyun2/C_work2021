#include <stdio.h>

struct employee
{
    char name[20];
    char id_num[20];
    int pay;
};

int main(void)
{
    struct employee man[3];

    for(int i =0;i<3;i++)
    {
        printf("종업원 이름 입력 : ");scanf("%s", man[i].name);
        printf("주민등록번호 입력 : ");scanf("%s", man[i].id_num);
        printf("급여정보 입력 : ");scanf("%d", &man[i].pay);
        printf("\n");
    }
    printf("\n");
    for(int i =0;i<3;i++)
    {
        printf("종업원 이름 = %s\n", man[i].name);
        printf("주민등록번호 = %s\n", man[i].id_num);
        printf("급여정보 = %d\n", man[i].pay);
        printf("\n");
    }

    return 0;
}