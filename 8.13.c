#include<stdio.h>
#include<math.h>
float integral(float(*)(float), float, float, int);
float fsin(float);
float fcos(float);
float fexp(float);
int main() {
	float a1, b1, a2, b2, a3, b3, c, (*p)(float);
	int n = 20;
	printf("Input a1,b1:\n");
	scanf("%f %f",&a1,&b1);
	printf("Input a2,b2:\n");
	scanf("%f %f",&a2,&b2);
	printf("Input a3,b3:\n");
	scanf("%f %f",&a3,&b3);
	p = fsin;
	c = integral(p,a1,b1,n);
	printf("the integral of sin(x) is:%f\n",c);
	p = fcos;
	c = integral(p, a2, b2, n);
	printf("the integral of cos(x) is:%f\n", c);
	p = fexp;
	c = integral(p, a3, b3, n);
	printf("the integral of exp(x) is:%f\n", c);
	return 0;
}

float integral(float(*p)(float), float a, float b, int n) {
	int i;
	float x, h, s;
	h = (b - a) / n;
	x = a;
	s = 0;
	for (i = 0; i <= n; i++) {
		x = x + h;
		s = s + (*p)(x) * h;
	}
	return s;
}

float fsin(float x) {
	return sin(x);
}

float fcos(float x) {
	return cos(x);
}

float fexp(float x) {
	return exp(x);
}