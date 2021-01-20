#include<stdio.h>
#include<math.h>

double newtown(double a, double b, double c, double d);

int main() {
	double a, b, c, d, x;
	printf("please enter a,b,c,d\n");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	x = newtown(a, b, c, d);
	printf("方程的解是：%f", x);
}

double newtown(double a, double b, double c, double d) {
	double m, n, x1, x2;
	x2 = 1;
	do {
		//x1 = 1;
		x1 = x2;
		m = a * x1 * x1 * x1 + b * x1 * x1 + c * x1 + d;
		n = 3 * a * x1 * x1 + 2 * b * x1 + c;
		x2 = x1 - m / n;
	} while (fabs(x2 - x1) >= 1e-5);
	return x2;
}