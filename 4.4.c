#include<stdio.h>

int main() {
	int a, b, c,max;
	printf("please enter 3 numbers:\n");
	scanf_s("%d %d %d",&a,&b,&c);
	if (a > b)
		max = a;
	else
		max = b;
	if (max > c)
		max = max;
	else
		max = c;
	printf("tha max is %d", max);
}