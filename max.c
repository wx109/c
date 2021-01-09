#include<stdio.h>

int main() {
	int a, b,c,d;
	printf("please enter a:\n");
	scanf_s("%d",&a);
	printf("please enter b:\n");
	scanf_s("%d",&b);
	printf("please enter c:\n");
	scanf_s("%d", &c);
	d = max(a, b);
	d = max(d, c);
	printf("the max is %d\n", c);
}
int max(int x,int y) {
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}