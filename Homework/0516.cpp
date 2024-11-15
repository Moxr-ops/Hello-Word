#include <stdio.h>

int main()
{
    int r, n;
    printf("请输入行数（奇数）：\n");
    scanf("%d", &n);
    r = (n + 1) * 0.5;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = r - 1; i >= 1; i--)
    {
        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}