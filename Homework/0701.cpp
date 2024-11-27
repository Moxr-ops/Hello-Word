#include <stdio.h>
int gcd(int i, int j) {
	return j ? gcd(j, i % j) : i;
}
int lcm(int i, int j) {
	return i * j / gcd(i, j);
}
int main() {
	int i, j;
	printf("请输入两个整数：\n");
	scanf("%d %d", &i, &j);
	printf("最大公约数为：%d, 最小公倍数为：%d", gcd(i, j), lcm(i, j));
	return 0;
}