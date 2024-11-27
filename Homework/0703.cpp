#include <stdio.h>

int IsPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("请输入一个整数：\n");
    scanf("%d", &n);
    if (IsPrime(n))
    {
        printf("%d 是素数。\n", n);
    }
    else
    {
        printf("%d 不是素数。\n", n);
    }
    return 0;
}
