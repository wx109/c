#include<stdio.h>
#include<math.h>

int main() {
	double a;
	int b;
	printf("please enter a number:\n");
	scanf_s("%lf",&a);
	while (!(a < 1000)||a<0) {
		printf("please enter a right number:\n");
		scanf_s("%lf",&a);
	}
	//printf("%lf",a);
	b = (int)sqrt(a);
	printf("算数平方根是:%d\n",b);
	return 0;
}