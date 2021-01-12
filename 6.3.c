#include<stdio.h>

int main() {
	int a[3][3];
	int sum=0;
	printf("请输入3*3矩阵的值：\n");
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("请输入第%d行第%d列的值：\n",i+1,j+1);
			scanf_s("%d",&a[i][j]);
			if (i == j)
				sum = sum + a[i][j];
		}
	}
	printf("对角线之和为：%d",sum);
}