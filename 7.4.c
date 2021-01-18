#include<stdio.h>
#define N 3

void shift(int a[N][N]);
int a[N][N];

int main() {
	//int a[N][N];
	int i=0;
	while (i < N) {
		printf("请输入第%d行的%d个元素：\n",i+1,N);
		for (int j = 0; j < N; j++) {
			scanf("%d",&a[i][j]);
		}
		i++;
	}
	printf("原先的矩阵为：\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	shift(a);
	printf("转置后的矩阵为：\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

}

void shift(int a[N][N]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++) {
			int temp;
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
}