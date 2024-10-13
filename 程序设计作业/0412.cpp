#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, distance, h;
    printf("请输入坐标：\n");
    scanf("%f %f", &x, &y);
    x = fabs(x);
    y = fabs(y);
    distance = sqrt(pow(x - 2, 2) + pow(y - 2, 2));
    if (distance <= 1)
    {
        h = 10;
    }
    else
    {
        h = 0;
    }
    
    printf("%.1f米", h);

    return 0;
}