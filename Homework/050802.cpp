#include <stdio.h>
#include <math.h>

int main() 
{
    for (int i = 1; i < 10; i++) 
    { 
        for (int j = 0; j < 10; j++) 
        { 
            for (int k = 0; k < 10; k++) 
            { 
                if (i * 100 + j * 10 + k == (int)(pow(i, 3) + pow(j, 3) + pow(k, 3))) 
                {
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}