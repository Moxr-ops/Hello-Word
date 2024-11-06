#include <stdio.h>

int* Iversef(int* a, int k) {
	int tmp = 0;
	for (int i = 0; i < k / 2; i++) {
		tmp = a[i];
		a[i] = a[k - i - 1];
		a[k - i - 1] = tmp;
	}
	return a;
}

int main() {
	int k = 6;
	int a[k] = {0};
	printf("Numbers:\n");
	for (int i = 0; i < k; i++) {
		scanf("%d", &a[i]);
	}
	Iversef(a, k);
	for (int i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
