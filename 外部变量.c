#include<stdio.h>

int main() {
	int max();
	extern int A, B, C;
	printf("请输入三个数的值：\n");
	scanf("%d %d %d",&A,&B,&C);
	printf("三个数中最大的为：%d",max());
}
int A, B, C;

int max() {
	int m;
	m = A > B ? A : B;
	if (m > C)
		return m;
	else
		return C;
}