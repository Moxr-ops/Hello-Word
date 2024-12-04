#include <stdio.h>

void print_char(int num) {
    char numChars[5];
    
    int i = 3;
    do {
        numChars[i--] = (num % 10) + '0';
        num /= 10; 
    } while (num > 0);
    numChars[4] = '\0';
    
    for (int j = 0; j < 4; j++) {
        switch (numChars[j]) {
            case '0': printf("0"); break;
            case '1': printf("1"); break;
            case '2': printf("2"); break;
            case '3': printf("3"); break;
            case '4': printf("4"); break;
            case '5': printf("5"); break;
            case '6': printf("6"); break;
            case '7': printf("7"); break;
            case '8': printf("8"); break;
            case '9': printf("9"); break;
        }
        if (j < 3) 
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int number;
    
    printf("请输入一个4位数字: \n");
    scanf("%d", &number);
    
    print_char(number);
    
    return 0;
}