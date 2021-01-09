#include<stdio.h>
int main() {
	int m, n, t;
	int a, b;//最大公约数，和最小公倍数
	printf("请输入两个数：\n");
	scanf_s("%d %d", &m, &n);
	if (m > n) {
		t = m;
		m = n;
		n = t;
	}//保证m<n

	for (int i = 1; i <= n;i++) {
		if (n % i == 0 && m%i == 0)
			a = i;
	}
	//printf("%d\n",a);

	for (int i = m; i <= m * n; i++) {
		if (i % m == 0 && i%n == 0)
		{
			b = i;
			break;
		}
	}
	printf("最大公约数是：%d\n最小公倍数是:%d\n",a,b);

}