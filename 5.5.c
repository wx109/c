#include<stdio.h>
#include<math.h>
int main() {
	int sum=0, t=1, n,a;
	printf("请输入n的值：\n");
	scanf_s("%d",&n);
	printf("请输入a的值：\n");
	scanf_s("%d",&a);
	for (int i = 1; i <= n; i++) {
		sum = sum + t;
		t = t + pow(10, i);
	}
	sum = a * sum;
	printf("%d",sum);
}