#include <stdio.h>
int main()
{
    double sum = 0, SM;
    for(int j = 1; j <= 20; j++)
    {
        SM = 1;
        for (int i = 1; i <= j; i++)
        {
            SM *= i;
        }
        sum += SM;
    }
    printf("%.lf", sum);
    return 0;
}