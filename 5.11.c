#include<stdio.h>

int  main() {
	double sum=100, a=100;
	for (int i = 1; i <= 19; i++) {
		sum = sum + a;
		a = a / 2;
	}
	printf("%lf",sum);
}