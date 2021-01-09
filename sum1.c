#include<stdio.h>
int main() {
	int a;
	int b;
	int sum;
	printf("a is:\n");
	scanf_s("%d",&a);
	printf("b is:\n");
	scanf_s("%d",&b);
	sum = a + b;
	printf("a+b=%d\n", sum);
	return 0;
}