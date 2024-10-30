#include <stdio.h>

int Fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    int a = 1, b = 1, sum;
    for (int i = 2; i <= n; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    return b;
}

int main() {
    double sum = 0.0;
    for (int i = 1; i <= 20; i++) {
        int a = Fibonacci(i + 1);
        int b = Fibonacci(i);
        sum += (double)a / b;
    }
    printf("%lf\n", sum);
    return 0;
}
