#include<stdio.h>
void inv(int* p, int n);
int main() {
	int a[10];
	int* p = a;
	for (int i = 0; i < 10; i++, p++) {
		printf("请输入数组中第%d个元素的值：\n",i+1);
		scanf("%d",p);
	}
	p = a;
	inv(p, 10);
	printf("颠倒后的数组为：\n");
	for (p = a; p < a + 10; p++) {
		printf("%d ",*p);
	}
	printf("\n");
	return 0;
}

void inv(int* p, int n) {
	int m = (n - 1) / 2;
	int* i = p;
	int* x = p + m;
	int* j = p + n - 1;
	for (; i < x; i++,j--) {
		int temp;
		temp = *i;
		*i = *j;
		*j = temp;
	}
}