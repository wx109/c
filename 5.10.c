#include<stdio.h>
int main() {
	double a = 1, b = 2,sum=0;
	for (int i = 1; i <= 20; i++) {
		double c;
		sum = sum + b / a;
		c = b;
		b = b + a;
		a = c;
	}
	printf("%lf",sum);
}