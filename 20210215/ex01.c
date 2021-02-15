#include <stdio.h>
#include <math.h>

struct point
{
    int xpos;
    int ypos;
};

void main()
{
    struct point pos1, pos2;
    
    double distance;
    fputs("pos1 pos = ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("pos2 pos = ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    distance = sqrt(
        (double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)) 
        + ((pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

    printf("두 점 사이의 거리는 %g 입니다.\n", distance);
    printf("%d", sizeof(pos1));
}