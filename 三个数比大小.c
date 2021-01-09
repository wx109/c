#include<stdio.h>
int main() {
	float a, b, c;
	float t;
	printf("please enter 3 numbers:\n");
	scanf_s("%f %f %f",&a,&b,&c);
	if (a > b) {
		t = a;
		a = b;
		b = t;
		//printf("%f %f %f\n", a, b, c);
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
		//printf("%f %f %f\n", a, b, c);
	}
	if (a > b) {
		t = a;
		a = b;
		b = t;
		//printf("%f %f %f\n", a, b, c);
	}
	printf("%f %f %f\n", a, b, c);
}