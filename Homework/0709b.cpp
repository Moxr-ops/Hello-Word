#include <stdio.h>

int cot[4]; // 空格、字母、数字、其他

int* count(char* str) {
	for (int i = 0; i < 4; i++) {
		cot[i] = 0;
	}

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			cot[0]++;
		} else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			cot[1]++;
		} else if (str[i] >= '0' && str[i] <= '9') {
			cot[2]++;
		} else if (str[i] != '\0') {
			cot[3]++;
		}
	}
	return cot;
}

int main() {
	char str[100] = {0};
	printf("请输入一个字符串：\n");
	gets(str);
	count(str);
	printf("空格：%d\n字母：%d\n数字：%d\n其他：%d\n", cot[0], cot[1], cot[2], cot[3]);
	return 0;
}
