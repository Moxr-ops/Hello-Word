#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (i * 100 + j * 10 + k == i * i * i + j * j * j + k * k * k)
                {
                    printf("%d\n", i * 100 + j * 10 + k);
                }
            }
        }
    }
}