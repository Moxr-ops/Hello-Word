#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", (a > b ? (a > c ? (a > d ? a : d) : (c > b ? (c > d ? c : d) : (b > d ? b : d))) : (b > c ? (b > d ? b : d) : (c > d ? c : d))));

    return 0;
}