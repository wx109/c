#include<stdio.h>
#include<math.h>

int main(){
	double x1, x2, f, f1;
	printf("请输入一个初始解：");
	scanf_s("%lf",&x2);
	//f = ((2 * x1 - 4) * x1 + 3) * x1 - 6;
	//f1 = (6 * x1 - 8) * x1 + 3;
	do {
		x1 = x2;
		f = ((2 * x1 - 4) * x1 + 3) * x1 - 6;
		f1 = (6 * x1 - 8) * x1 + 3;
		x2 = x1 - f / f1;
	} while (fabs(x2 - x1) >= 1e-5);

	printf("解是：%lf",x1);
}