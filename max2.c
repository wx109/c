#include<stdio.h>
int main() {
	int i = 10;
	int n=1;
	int m;
	int max = 0;
	printf("please enter the %d number:\n", n);
	scanf_s("%d", &m);
	max = m;
	n++;
	while (n < i + 1) {
		printf("please enter the %d number:\n", n);
		scanf_s("%d",&m);
		if (m > max)
			max = m;
		n++;
	}
	printf("the max number is %d", max);
	return 0;
}

