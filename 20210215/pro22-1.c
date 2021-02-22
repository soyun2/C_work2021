#include <stdio.h>

// struct employee
// {
//     char name[20];
//     char id_num[20];
//     int pay;
// };

// int main(void)
// {
//     struct employee man;

//     printf("종업원 이름 입력 : ");scanf("%s", man.name);
//     printf("주민등록번호 입력 : ");scanf("%s", man.id_num);
//     printf("급여정보 입력 : ");scanf("%d", &man.pay);
//     printf("\n");
    
//     printf("종업원 이름 = %s\n", man.name);
//     printf("주민등록번호 = %s\n", man.id_num);
//     printf("급여정보 = %d\n", man.pay);

//     return 0;
// }


typedef struct
{
    char name[30];
    char jumin[14];
}Employee;

void main()
{
    Employee emp;
    printf("이름을 입력하세요 ");
    scanf("%s", emp.name);
    printf("주민번호를 입력하세요 ");
    scanf("%s", emp.jumin);

    printf("입력한 이름 = %s\n", emp.name);
    printf("입력한 주민번호 = %s", emp.jumin);
}