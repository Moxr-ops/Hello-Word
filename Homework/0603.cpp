#include <stdio.h>

int main() {
	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	}, sum = 0;

	for (int i = 0; i < 3; i++) {
		sum += i == 2 - i ? a[i][i] : a[i][i] + a[i][2 - i];
	}

	printf("%d", sum);

	return 0;
}