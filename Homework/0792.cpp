#include <stdio.h>

int count_days(int year, int month) {
	int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			return 29;
		} else {
			return 28;
		}
	} else {
		return month_days[month - 1];
	}
}

int main() {
	int year, month;
	printf("请输入年月份：\n");
	scanf("%d %d", &year, &month);
	printf("%d天\n", count_days(year, month));
	return 0;
}
