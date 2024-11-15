#include <stdio.h>

void YangHui(int size)
{
    int a[100][100] = {0};
    for (int i = 0; i < size; i++) {
        a[i][0] = 1; 
        a[i][i] = 1; 

        for (int j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; 
        }

        for (int k = 0; k <= i; k++) {
            printf("%4d", a[i][k]);
        }
        printf("\n");
    }
}

int main()
{
    int size;
    printf("size?\n");
    scanf("%d", &size);
    YangHui(size);
    return 0;
}