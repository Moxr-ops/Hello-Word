#include <stdio.h>

int main() 
{  
    int a = 2;
    int b = 3;
    float x = 3.5;
    float y = 2.5;

    float result = (float)(a + b) / 2 + (int)x % (int)y;

    printf("%f\n", result);  

    return 0;  
}  