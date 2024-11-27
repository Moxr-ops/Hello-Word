#include <stdio.h>

int main() {
	char secret[100] = {0};
	char original[100] = {0};
	printf("请输入密码：");
	scanf("%s", secret);
	for (size_t i = 0; i < sizeof(secret) / sizeof(secret[0]); i++) {
		if ((secret[i] >= 'A' && secret[i] <= 'Z')) {
			original[i] = 'Z' - (secret[i] - 'A');
		} else if ((secret[i] >= 'a' && secret[i] <= 'z')) {
			original[i] = 'z' - (secret[i] - 'a');
		} else {
			original[i] = secret[i];
		}
	}
	printf("原文：%s\n密码：%s\n", original, secret);
	return 0;
}
