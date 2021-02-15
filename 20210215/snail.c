#include <stdio.h>

//출력
void doPrint(int (*arr)[5], int len)
{
    int len = 5;
    for(int i=0; i<len; i++){
        for(int j=0; j<len;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int len;
    printf("배열 크기 입력 : ");
    scanf("%d", &len);

    int arr[100][100] = {0,};
    doPrint(arr, len);

    int drec = 1; //1 오른쪽, 2 아래, 3 왼쪽, 4 위

    int value = 1;
    int i = 0, j=0;
    while(1)
    {
        if(arr[i][j] != 0)
            break;
            
        if(drec == 1)
        {
            arr[i][j]=value++;
            j++;
        }
        else if(drec == 2)
        {
            i++;
        }
        else if(drec == 3)
        {
            i--;
        }
        else
        {
            j--;
        }
    }
}