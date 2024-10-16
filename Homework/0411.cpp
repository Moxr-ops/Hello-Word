#include <stdio.h>

int main()
{
    int a[4], t;
    printf("请输入四个数字：\n");
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("%d %d %d %d", a[0], a[1], a[2], a[3]);

    return 0;
}