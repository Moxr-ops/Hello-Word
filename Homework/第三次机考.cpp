#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 2; i < 1000; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            sum += i % j == 0 ? j : 0;
        }
        if (sum == i)
        {
            printf("%d = ", i);
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    printf(" %d +", j);
                }
            }
            printf("\b \n");
        }
    }
    return 0;
}