#include <stdio.h>
#include <math.h>

int main() {
	float x, s = 100;
	int times = 10;

	for (int i = 0; i < times; i++) {
		x = 100.0 * pow(0.5, i + 1);
		s += x * 2;
	}
    s -= x * 2;

	printf("第10次落地共经过%f米，第10次反弹%f米", s, x);

	return 0;
}
