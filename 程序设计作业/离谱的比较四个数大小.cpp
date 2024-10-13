#include <stdio.h>

int main()
{
    int a, b, c, d, t;
    printf("请输入四个数字：\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d %d %d %d", a>b?a>c?a>d?a:d:c>d?c:d:b>c?b>d?b:d:c>d?c:d, a>b?b>c?c>d?a>c?c:a:a>d?d:a:b>d?a>b?b:a:a>d?d:a:a>c?c>d?b>a?a:b:b>d?d:b:b>d?b>c?c:b:d>c?c:d, a<b?b<c?c<d?a<c?c:a:a<d?d:a:b<d?a<b?b:a:a<d?d:a:a<c?c<d?b<c?c:b:b<d?d:b:b<d?b<c?c:b:d<c?c:d, a<b?a<c?a<d?a:d:c<d?c:d:b<c?b<d?b:d:c<d?c:d);
    return 0;
}