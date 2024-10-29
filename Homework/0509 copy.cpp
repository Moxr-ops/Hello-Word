#include <stdio.h>

int Factor(int n, int i)
{
    if (n <= 0 || i <= 0) 
        return 0;
        
    int FactorCount = 0;
    for (int j = 1; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            FactorCount++;
            if (FactorCount == i)
                return j;
            if (j * j != n)
            {
                FactorCount++;
                if (FactorCount == i)
                    return n / j;
            }
        }
    }
    return 0;
}
int main()
{
    int n, i, sum = 0;
    printf("Give me a number:\n");
    scanf("%d", &n);

    for (int j = 1; j <= 1000; j++)
    {
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            sum = sum + Factor(n, i);
        }
        if (sum == n)
            printf("%d: \n", n);
    }
        
    return 0;
}