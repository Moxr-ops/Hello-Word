#include <stdio.h>
#include <string.h>

float Average(int a[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

int main()
{
    int a[10] = {0};
    printf("six numbers:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Average is %f\n", Average(a, 6));
    return 0;
}