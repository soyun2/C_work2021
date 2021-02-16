#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char *result[50] = {"가위", "바위", "보"};
    int w=0, s=0;
    int num;
    int com;
    srand((int)time(NULL));

    do{
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &num);
        com = rand()%3+0;

        if(num==com)
        {
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!", *result[num-1], *result[com-1]);
            s++;
        }
        else if(num-com==-1 || num-com==2)
            w++;
        else{
            printf("게임의 결과 : %d승, %d무", w, s);
            break;
        }
    }while(1);
    

}