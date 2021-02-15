#include <stdio.h>

struct employee
{
    char name[20];
    char id_num[20];
    int pay;
};

int main(void)
{
    struct employee man;

    printf("종업원 이름 입력 : ");scanf("%s", man.name);
    printf("주민등록번호 입력 : ");scanf("%s", man.id_num);
    printf("급여정보 입력 : ");scanf("%d", &man.pay);
    printf("\n");
    
    printf("종업원 이름 = %s\n", man.name);
    printf("주민등록번호 = %s\n", man.id_num);
    printf("급여정보 = %d\n", man.pay);

    return 0;
}