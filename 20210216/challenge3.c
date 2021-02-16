#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("난수 출력 %d \n", RAND_MAX);

    // 0 < rand() < 32767

    for(int i=0; i<10; i++){
        printf("%d\n", rand()%100);
    }
}