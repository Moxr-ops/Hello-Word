#include <stdio.h>
#include <math.h>

int Digits(int num)
{
    return int(log10(num)) + 1;
}

void EveryNum(int num)
{
    if (num < 0) 
    {
        num = -num; 
    }
    int divisor = 1;
    while (num / divisor >= 10) 
    {
        divisor *= 10;
    }
    while (divisor > 0) 
    {
        int digit = num / divisor; 
        printf("%d ", digit); 
        num %= divisor; 
        divisor /= 10;
    }
    printf("\n");
    return;
}

int Reverse(int num)
{
    int val = 0;
    while (num)
    {
        val = val * 10 + num % 10;
        num /= 10;
    }
    return val;
}

int main()
{
    int num;
    printf("请输入一个数字：\n");
    scanf("%d", &num);
    printf("该数字有%d位\n", Digits(num));
    EveryNum(num);
    printf("%d\n", Reverse(num));

    return 0;
}