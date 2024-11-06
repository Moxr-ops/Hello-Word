#include <stdio.h>

float Max(float* a, int* index) {
	float max = a[0];
	*index = 0;
	for (int i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			*index = i;
		}
	}
	return max;
}

float Min(float* a, int* index) {
	float min = a[0];
	*index = 0;
	for (int i = 1; i < 10; i++) {
		if (min > a[i]) {
			min = a[i];
			*index = i;
		}
	}
	return min;
}

int main() {
	int max, min;
	float a[10] = {0};
	printf("Ten numbers:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%f", &a[i]);
	}
	Max(a, &max), Min(a, &min);
	printf("The max is %.f, the index is %d\nThe min is %.f, the index is %d", Max(a, &max), max, Min(a, &min), min);
	return 0;
}
