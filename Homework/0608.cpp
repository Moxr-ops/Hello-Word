#include <stdio.h>

bool is_c_min(int* arr, int r, int c, int x, int y) {
	for (int i = 0; i < r; i++) {
		if (*(arr + i * c + y) < * (arr + x * c + y)) {
			return false;
		}
	}
	return true;
}

bool is_r_max(int* arr, int c, int x, int y) {
	for (int i = 0; i < c; i++) {
		if (*(arr + x * c + i) > *(arr + x * c + y)) {
			return false;
		}
	}
	return true;
}

void find_saddle_point(int* arr, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (is_c_min(arr, r, c, i, j) && is_r_max(arr, c, i, j)) {
				printf("鞍点坐标（行号，列号）：(%d, %d)\n", i, j);
				return;
			}
		}
	}
	printf("不存在鞍点\n");
}

int main() {
	int arr0[3][4] = {
		{1, -4, 200, 56},
		{80, -100, 400, 123},
		{567, 100, 30, 2000}
	}; //无鞍点的情况
	int arr1[3][4] = {
		{1, -4, 600, 56},
		{80, -100, 400, 123},
		{567, 100, 900, 2000}
	}; //有鞍点的情况
	int arr2[10][10] = {
		{20, 21, 22, 23, 24, 25, 26, 27, 28, 29},
		{30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
		{40, 41, 42, 43, 44, 45, 46, 47, 48, 49},
		{50, 51, 52, 53, 54, 55, 56, 57, 58, 59},
		{60, 61, 62, 63, 64, 65, 66, 67, 68, 69},
		{70, 71, 72, 73, 74, 75, 76, 77, 78, 79},
		{80, 81, 82, 83, 84, 85, 86, 87, 88, 89},
		{90, 91, 92, 93, 94, 95, 96, 97, 98, 99},
		{100, 101, 102, 103, 104, 105, 106, 107, 108, 109},
		{110, 111, 112, 113, 114, 115, 116, 117, 118, 119}
	}; //有鞍点的情况
	find_saddle_point(&arr0[0][0], 3, 4);
	find_saddle_point(&arr1[0][0], 3, 4);
	find_saddle_point(&arr2[0][0], 10, 10);

    return 0;
}
