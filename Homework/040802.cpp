#include <stdio.h>

int main()
{
    float score;

    printf("请输入成绩：\n");
    scanf("%f", &score);
    if (score > 100 || score < 0)
    {
        printf("错误");
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