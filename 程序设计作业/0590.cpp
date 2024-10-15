#include <stdio.h>
int main()
{   
    int i, j, sum = 0;
    printf("请输入两个数：\n");
    scanf("%d %d", &i, &j);
    if(i <= j)
    {
        for(; i <= j; i++)
        {
            sum += i;
        }
    }
    else
    {
        for(; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("%d\n", sum);
    return 0;
}