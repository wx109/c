#include<stdio.h>
#define N 4
#define M 5
int main() {
	int a[N][M];
	int n, m,count=0;
	int nums[N];
	for (int i = 0; i <= N - 1; i++)
		nums[i] = 0;
	printf("请输入矩阵：\n");
	for (int i = 0; i <= N-1; i++) {
		for (int j = 0; j <= M-1; j++) {
			scanf_s("%d",&a[i][j]);
		}
	}
	for (int i = 0; i <= N - 1; i++) {
		int max = a[i][0];
		n = i;
		m = 0;
		for (int j = 1; j <= M - 1; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
				n = i;
				m = j;
			}
		}
		for (int i = 0; i <= N - 1; i++) {
			if (a[i][m] < max) {
				nums[n] = 0;
				break;
			}
			else
				nums[n] = nums[n] + 1;
		}
		if (nums[n] != 0) {
			count++;
			printf("存在鞍点，其行坐标为：%d,列坐标为：%d,数值为：%d\n",n,m,a[n][m]);
		}
	}
	if (count == 0)
		printf("此二维数组不存在鞍点\n");
}