#include<stdio.h>

#define PI 3.14
int main() {
    float r = 1.5, h = 3;
    float a;//圆周长
    float b;//圆面积
    float c;//圆球表面积
    float d;//圆球体积
    float e;//圆柱体积
    a = 2 * PI * r;
    b = PI * r * r;
    c = 4 * PI * r * r;
    d = (4 / 3) * PI * r * r * r;
    e = PI * r * r * h;
    printf("%6.2f\n%6.2f\n%6.2f\n%6.2f\n%6.2f\n",a,b,c,d,e);
}