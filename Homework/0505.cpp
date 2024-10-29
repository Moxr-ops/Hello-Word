#include <stdio.h>
int main()
{
    int a, n, j = 0, sum = 0;
    printf("«Î ‰»Îa∫Õn£∫\n");
    scanf("%d %d", &a, &n);
    for (int i = 0; i < n; i++)
    {
        j = j * 10 + a;
        sum += j;
    }
    printf("%d", sum);
    return 0;
}