#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int w=0, s=0;
    int num;
    int com;
    char num_s[20], com_s[20];
    srand((int)time(NULL));

    do{
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &num);
        com = rand()%3+1;
        char *arr[3]={"바위","가위","보"};

        if(num==com)
        {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", arr[num-1], arr[com-1]);
            s++;
        }
        else if(num-com==-1 || num-com==2)
        {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n", arr[num-1], arr[com-1]);
            w++;
        }           
        else{
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", arr[num-1], arr[com-1]);
            printf("\n\n게임의 결과 : %d승, %d무", w, s);
            break;
        }
    }while(1);
}