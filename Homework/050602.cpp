#include <stdio.h>
int main()
{
    double num = 1, sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        num *= i;
        sum += num;
    }
    printf("%.lf", sum);
    return 0;
}