#include <stdio.h>

double Factorial(int n) {
	double result = 1.0;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int n;
	double sum = 0.0;

	printf("请输入一个正整数：\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += Factorial(i);
	}

	printf("%.0lf\n", sum);
	return 0;
}
