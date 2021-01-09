#include<stdio.h>

int main() {
	float r;//增长率
	int n;//年数
	float p = 1;//与现在相比倍数
	int i=1;
	printf("请输入年增长率：\n");
	scanf_s("%f",&r);
	printf("请输入年数：\n");
	scanf_s("%d", &n);

	while (i < n + 1) {
		p = p * (1 + r);
		i++;
	}

	printf("现在的生产总值是%d年前的%f倍",n,p);
	return 0;
	
}