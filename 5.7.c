#include<stdio.h>

int main() {
	double i=1,sum1=0,sum2=0,sum3=0,sum;
	while (i <= 100) {
		sum1 = sum1 + i;
		i++;
	}
	i = 1;
	while (i <= 50) {
		sum2 = sum2 + i * i;
		i++;
	}
	i = 1;
	while (i <= 10) {
		sum3 = sum3 + 1 / i;
		i++;
	}
	sum = sum1 + sum2 + sum3;
	printf("%lf",sum);
	//printf("%lf %lf %lf",sum1,sum2,sum3);
}