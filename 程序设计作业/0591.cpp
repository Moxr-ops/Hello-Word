#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    printf("请输入两个数：\n");
    scanf("%d %d", &i, &j);
    do
    {
        sum += i % 2 == 0 ? i : 0;
        i++;
    } while (i <= j);
    printf("%d\n", sum);
    return 0;
}