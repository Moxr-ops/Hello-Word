#include <stdio.h>

int TheSum(int n, int m) {
	int num = 0;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		num = num * 10 + n;
		sum += num;
	}
	return sum;
}

int main() {
	int n, m;
	printf("请输入两个整数：\n");
	scanf("%d %d", &n, &m);
	printf("%d", TheSum(n, m));
	return 0;
}

