#include <stdio.h>
int gcd(int i, int j) {
	return j ? gcd(j, i % j) : i;
}
int lcm(int i, int j) {
	return i * j / gcd(i, j);
}
int main() {
	int i, j;
	printf("�������������֣�\n");
	scanf("%d %d", &i, &j);
	printf("�������Ϊ��%d, ��С������Ϊ��%d", gcd(i, j), lcm(i, j));
	return 0;
}
