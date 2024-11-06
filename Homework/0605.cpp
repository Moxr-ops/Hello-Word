#include <stdio.h>

int main() 
{
    int a[5] = {5, 60, 7, 8, 100};
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (a[i] < a[j]) 
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}

