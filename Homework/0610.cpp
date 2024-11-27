#include <stdio.h>

int main() {
	char arr[] = {'a', 'b', '0', '#', 'A', ' ', '1', 'd', '@', 'Z'};
	int CL = 0;
	int DL = 0;
	int KL = 0;
	int QL = 0;
	int other = 0;

	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			CL++;
		} else if (arr[i] >= 'a' && arr[i] <= 'z') {
			KL++;
		} else if (arr[i] >= '0' && arr[i] <= '9') {
			DL++;
		} else if (arr[i] == ' ') {
			QL++;
		} else {
			other++;
		}
	}
	printf("大写字符：%d\n小写字符：%d\n数字字符：%d\n空格：%d\n其他字符：%d\n", CL, KL, DL, QL, other);
	return 0;
}
