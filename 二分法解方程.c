#include<stdio.h>
#include<math.h>

int main() {
	float x1, x2, x3;
	float f1, f2, f3;
	do {
		printf("请输入一个解的范围x1~x2:");
		scanf_s("%f %f", &x1, &x2);
		f1 = ((2 * x1 - 4) * x1 + 3) * x1 - 6;
		f2 = ((2 * x2 - 4) * x2 + 3) * x2 - 6;
	} while (f1 * f2 > 0);
	do {
		x3 = (x1 + x2) / 2;
		f3 = ((2 * x3 - 4) * x3 + 3) * x3 - 6;
		if (f3 * f1 < 0)
			x2 = x3;
		else
			x1 = x3;
		
	} while (fabs(f3) >= 1e-5);
	printf("%6.2f\n",x3);
	return 0;
	//f3 = ((2 * x3 - 4) * x3 + 3) * x3 - 6;
}