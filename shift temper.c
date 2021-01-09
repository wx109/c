#include<stdio.h>
int main() {
	float f, c;
	printf("please enter the f:\n");
	scanf_s("%f",&f);
	c = 5 * (f - 32) / 9;
	printf("the c is: %f\n", c);
}