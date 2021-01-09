#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, x1, x2, dise,m,n;
	printf("please enter a b c:\n");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	printf("a is %7.2f\nb is %7.2f\nc is %7.2f\n", a, b, c);
	dise = b * b - 4*a*c;
	if (dise < 0)
		printf("无实数根");
	else {
		m = -b / (2*a);
		n = sqrt(dise) / (2 * a);
		x1 = m + n;
		x2 = m - n;
		printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	}
	return 0;
}