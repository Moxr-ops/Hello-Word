#include <stdio.h>

void split(int num, int* arr)
{
    int a;
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
}

int main() {
    int num;
    int arr[4];
    printf("请输入一个数字：\n");
    scanf("%d", &num);
    split(num, arr);
    for (int i = 0; i < 4; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}