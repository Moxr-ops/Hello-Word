#include <stdio.h>

int main()
{
    float score;

    printf("ÇëÊäÈë³É¼¨\n");
    scanf("%f", &score);
    if (score > 100 || score < 0)
    {
        printf("´íÎó");
        return 0;
    }
    
    int score0 = int(score / 10);

    switch (score0)
    {
    case 10:printf("A");break;
    case 9:printf("A");break;
    case 8:printf("B");break;
    case 7:printf("C");break;
    case 6:printf("D");break;
    default:
        printf("E");
        break;
    }

    return 0;
}