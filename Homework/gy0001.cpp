#include<stdio.h>
int main( )
{
    int i;
    int f[20] = {1,1};
    for (i = 2; i <= 19; i++)
    {
        f[i] = f[i-1] + f[i-2];
	    printf("%d  ", f[i]);
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }
}