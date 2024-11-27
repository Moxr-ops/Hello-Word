#include <stdio.h>

int main() {
	char a[100] = {0}, b[100] = {0};
	printf("请输入字符串a：");
	scanf("%s", a);
	printf("请输入字符串b：");
	scanf("%s", b);
	size_t i = 0, j = 0;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if (a[i] == 0) {
			break;
		}
	}
	for (; j < sizeof(b) / sizeof(b[0]); j++, i++) {
		a[i] = b[j];
	}
	a[i] = 0;
	printf("合并后的字符串：%s\n", a);
	return 0;
}
