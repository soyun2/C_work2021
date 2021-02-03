#include <stdio.h>

void main()
{
    int arr[10];
    int num;
    int temp;
    int top=0, bo=9;

    printf("총 10개의 숫자 입력\n");

    for(int i=0;i<10;i++)
    {
        printf("입력 : ");
        scanf("%d", &temp);
        if(temp%2==1)
        {
            arr[top] = temp;
            top++;
        }
        else
        {
            arr[bo] = temp;
            bo--;    
        }
    }

    printf("배열 요소의 출력 : ");
    for(int i=0; i<10;i++)
    {
        printf("%d ", arr[i]);
    }        
}
