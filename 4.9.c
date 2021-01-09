#include<stdio.h>

int main() {
	int x,k;
	printf("please enter x:");
	scanf_s("%d",&x);
	if (x - 10 < 0) {
		k = 1;
		printf("%d是%d位数\n其每一位分别是%d\n逆序是%d\n", x, k, x, x);
	}
	else if (x - 100 < 0) {
		k = 2;
		int m1, m2;
		m1 = x / 10;
		m2 = x % 10;
		printf("%d是%d位数\n其每一位分别是%d%d\n逆序是%d%d\n", x, k, m1, m2, m2, m1);
	}
	else if (x - 1000 < 0) {
		k = 3;
		int m1, m2, m3;
		m1 = x / 100;
		m3 = x % 10;
		m2 = (x % 100) / 10;
		printf("%d是%d位数\n其每一位分别是%d%d%d\n逆序是%d%d%d\n", x, k, m1, m2,m3,m3, m2, m1);
	}

}