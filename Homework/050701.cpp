#include <stdio.h>
int main() {
	float sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	for (int j = 1; j <= 50; j++) {
		sum += j * j;
	}
	for (int k = 1; k <= 10; k++) {
		sum += 1.0 / k;
	}
	printf("%.4f", sum);
	return 0;
}
