#include<stdio.h>
#include<math.h>

int main() {
	double a, x1, x2;
	printf("please enter a number:\n");
	scanf_s("%lf",&a);
	x1 = a/2;
	x2 = (x1 + a / x1) / 2;
	while (fabs(x1 - x2) >= 1e-5) {
		x1 = x2;
		x2 = (x1 + a / x1) / 2;
	}
	printf("%8.5f\n", x2);
}