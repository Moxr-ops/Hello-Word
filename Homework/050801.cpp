#include <stdio.h>
#include <math.h>
int Digit(int num, int i)
{
    return num / (int)pow(10, i - 1) % 10;
}
int main()
{
    for (int i = 100; i <= 999; i++)
    {
        if (i == pow(Digit(i, 1), 3) + pow(Digit(i, 2), 3) + pow(Digit(i, 3), 3))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}