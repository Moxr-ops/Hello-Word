#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.2f", a<1?a:a<10?2*a-1:3*a-11);
    return 0;
}