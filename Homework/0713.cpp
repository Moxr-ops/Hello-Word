#include <stdio.h>

float LeJeande(float x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        return ((2 * n - 1) * x - LeJeande(x, n - 1) - (n - 1) * LeJeande(x, n - 2)) / n;
    }
}

int main()
{
    float x;
    int n;
    printf("请输入x和n：\n");
    scanf("%f %d", &x, &n);
    printf("%f", LeJeande(x, n));
    return 0;
}