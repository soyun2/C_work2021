#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

int main(void)
{
    struct point arr[3];
    int i;

//구조체 내에 데이터 입력받기 (괄호 주의)
    for(i=0;i<3;i++)
    {
        printf("arr[%d].xpos = ", i);
        scanf("%d", &(arr[i].xpos)); //전체 괄호후 & 붙이기
        printf("arr[%d].ypos = ", i);
        scanf("%d", &(arr[i].ypos));
    }
    printf("\n");

    for(i=0; i<3; i++)
    {
        printf("arr[%d].xpos = %d ", i, arr[i].xpos);
        printf("arr[%d].ypos = %d \n", i, arr[i].ypos);
    }

    return 0;
}