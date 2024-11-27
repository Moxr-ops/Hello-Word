#include <stdio.h>

int main() 
{
    char s1[100] = {0}, s2[100] = {0};
    printf("请输入字符串s2：");
    scanf("%s", s2);
    
    int i = 0;
    while (s2[i] != '\0') 
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    printf("复制后的字符串：%s\n", s1);
    return 0;
}
