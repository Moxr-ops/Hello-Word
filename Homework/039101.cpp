#include <stdio.h>

int main() 
{  
    float x = 2.5;  
    int a = 7;  
    float y = 4.7;  
 
    float result = x + (a % 3) * ((int)(x + y) % 2) / 4.0;  

    printf("%f\n", result);  

    return 0;  
}  