#include<stdio.h>

int max_comfac(int a, int b);
int min_commul(int a, int b);
int main() {
	int a, b,c,d;
	printf("请输入两个数a和b\n");
	scanf("%d %d",&a,&b);
	c = max_comfac(a, b);
	d = min_commul(a, b);
	printf("最大公约数是:%d\n，最小公倍数是:%d\n",c,d);
	return 0;
}

int max_comfac(int a, int b) {
	int min;
	if (a > b)
		min = b;
	else
		min = a;
	int m;
	for (int i = 1; i <= min; i++) {
		if (a % i == 0 && b % i == 0) {
			m = i;
			//printf("%d\n",m);
		}
	}
	//printf("%d",m);
	return (m);
}

int min_commul(int a, int b) {
	int max;
	if (a > b)
		max = a;
	else
		max = b;
	int n;
	for (int i = max; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			n = i;
			break;
		}
	}
	return n;
}