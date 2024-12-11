#include <stdio.h>
#include <stdlib.h>

int num;

int* split()
{
    int a;
    int* arr = (int*)malloc(4 * sizeof(char));
    for (int i = 3; i >= 0; i--)
    {
        a = num % 10;
        switch (a)
        {
            case 0: arr[i] = '0'; break;
            case 1: arr[i] = '1'; break;
            case 2: arr[i] = '2'; break;
            case 3: arr[i] = '3'; break;
            case 4: arr[i] = '4'; break;
            case 5: arr[i] = '5'; break;
            case 6: arr[i] = '6'; break;
            case 7: arr[i] = '7'; break;
            case 8: arr[i] = '8'; break;
            case 9: arr[i] = '9'; break;
        }
        num /= 10;
    }
    return arr;
}

int main() {
    printf("请输入一个数字：\n");
    scanf("%d", &num);
    int* arr = split();
    for (int i = 0; i < 4; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}