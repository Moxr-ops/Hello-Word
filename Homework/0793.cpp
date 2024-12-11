#include <stdio.h>

int findmax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max_rest = findmax(arr, n-1);
    return arr[n-1] > max_rest ? arr[n-1] : max_rest;
}

int main() {
    int arr[4];
    printf("请输入四个整数：\n");
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
    printf("最大值是：%d\n", findmax(arr, 4));
    return 0;
}
