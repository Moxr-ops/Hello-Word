#include <stdio.h>

int main() 
{  
    float r = 1.5;
    float h = 3.0;
    float pi = 3.1415927;

    float c1 = 2 * r * pi;
    float s1 = pi * r * r;
    float s2 = 4 * pi * r * r;
    float v1 = (3.0 / 4.0) * pi * r * r * r;
    float v2 = s1 * h;

    printf("圆周长=%f\n圆面积=%f\n圆球表面积=%f\n圆球体积=%f\n圆柱体积=%f\n", c1, s1, s2, v1, v2);

    return 0;  
}  