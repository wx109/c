#include<stdio.h>
#include<math.h>

int main() {
	double a, b, c, x1, x2, disc, realpart, imagpart;
	printf("please enter a b c:\n");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	if (fabs(a) <= 1e-6)
		printf("这不是一个一元二次方程");
	else{
		disc = b * b - 4*a * c;
		if (fabs(disc) < 1e-6) {
			printf("有两相等的实根：%8.4f",-b/(2*a));
		}
		else {
			if (disc > 1e-6) {
				x1 = (-b + sqrt(disc)) / (2 * a);
				x2 = (-b - sqrt(disc)) / (2 * a);
				printf("x1 is %8.4f and x2 is %8.4f\n", x1, x2);
			}
			else {
				realpart = -b / (2 * a);
				imagpart = sqrt(fabs(disc)) / (2 * a);
				printf("the result is:\n");
				printf("%8.4f + %8.4fi\n", realpart, imagpart);
				printf("%8.4f - %8.4fi\n", realpart, imagpart);
			}
		}

	}
	return 0;

}