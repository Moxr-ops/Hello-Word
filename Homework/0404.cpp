#include <stdio.h>

int Max(int arr[])
{
    int max = arr[0];
    for(int i = 1; i < 3; i++)
    {
        max > arr[i] ? 1 : max = arr[i];
    }
    return max;
}

int main()
{
    int a[3];
    printf("请输入三个数：\n");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int max = Max(a); 
    printf("%d", max);

    return 0;
}