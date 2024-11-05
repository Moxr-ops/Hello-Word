#include <stdio.h>
#include <math.h>

int main()
{
    int i, j = 1;
    for(i = 1; i <= 10; i++)
    {
        if(j <= 2)
        {
            if(i == (int)pow(i / 100, 3) + (int)pow((i / 10) % 10, 3) + (int)pow(i % 10, 3))
            {
                printf("%d\n", i);
                j++;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}