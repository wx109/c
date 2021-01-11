#include<stdio.h>

int main() {
	//int a[6] = { 9,8,5,4,2,0 };
	int a[10];
	int count;//定义计数器
	for (int i = 0; i <= 9; i++) {
		printf("请输入a[%d]个值：\n", i);
		scanf_s("%d",&a[i]);
	}
	printf("输入的数组为：");
	for (int i = 0; i <= 9; i++) {
		//printf("输入的数组为：");
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i <= 9; i++) {
		count = 0;
		for (int j = 1; j <= 9 - i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
				count++;
			}
		}
		if (count == 0)
			break;
	}
	printf("排序的数组为：");
	for (int i = 0; i <= 9; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}