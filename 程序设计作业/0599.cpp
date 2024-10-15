#include <stdio.h>
int main()
{
    int i, j;
    printf("请输入n\n");
    scanf("%d", &j);
    for(i = 1; i <= j; i++)
    {
        if (i % 3 == 0 || i % 4 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}