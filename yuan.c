#include<stdio.h>

#define PI 3.14
int main() {
    float r = 1.5, h = 3;
    float a;//Բ�ܳ�
    float b;//Բ���
    float c;//Բ������
    float d;//Բ�����
    float e;//Բ�����
    a = 2 * PI * r;
    b = PI * r * r;
    c = 4 * PI * r * r;
    d = (4 / 3) * PI * r * r * r;
    e = PI * r * r * h;
    printf("%6.2f\n%6.2f\n%6.2f\n%6.2f\n%6.2f\n",a,b,c,d,e);
}