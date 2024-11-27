#include <stdio.h>

int main() {
	char a[100] = {0}, b[100] = {0};
	printf("请输入字符串a：");
	scanf("%s", a);
	printf("请输入字符串b：");
	scanf("%s", b);
	for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if (a[i] == b[i]) {
			continue;
		} else {
			printf("%d\n", a[i] - b[i]);
			break;
		}
	}
	return 0;
}
