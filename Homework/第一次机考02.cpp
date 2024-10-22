#include <stdio.h>
int main() {
	float score;
	printf("请输入成绩：\n");
	scanf("%f", &score);

	if (score < 0 || score > 100) {
		printf("错误");
		return 0;
	} else if (score >= 90) {
		printf("A");
	} else if (score >= 80) {
		printf("B");
	} else if (score >= 70) {
		printf("C");
	} else if (score >= 60) {
		printf("D");
	} else {
		printf("E");
	}
	return 0;
}
