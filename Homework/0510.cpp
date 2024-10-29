#include <stdio.h>
#include <string>
using namespace std;

// 判断一个数是否为完数并打印其因子
void printPerfectNumber(int num) {
    int sum = 0;
    string factors = "";
    
    // 寻找因子
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
            // 添加因子到字符串
            if(factors.empty()) {
                factors = to_string(i);
            } else {
                factors += "," + to_string(i);
            }
        }
    }
    
    // 如果是完数，则打印结果
    if(sum == num) {
        printf("%d its factors are %s\n", num, factors.c_str());
    }
}

int main() {
    // 遍历1到1000的所有数
    for(int i = 1; i <= 1000; i++) {
        printPerfectNumber(i);
    }
    
    return 0;
}