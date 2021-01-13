#include<stdio.h>
#define N 15
int main() {
	int a[N];
	printf("请从大到小输入数组a[N]的值：\n");
	scanf_s("%d",&a[0]);
	int t = 1;
	int n;
	int low = 0, high = N - 1, mid = (low + high) / 2;
	int m = 0;
	while (t < 15) {
		scanf_s("%d",&a[t]);
		if (a[t - 1] >= a[t])
			t++;
		else
			printf("请重新输入一个正确的值：\n");
	}
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("请输入要查找的数n：\n");
	scanf_s("%d",&n);

	while (low<=high) {
		if (a[mid] == n)
		{
			printf("查找成功，位于数组的第%d位\n", mid + 1);
			m = 1;
			break;
		}
		else if (a[mid] > n) {
			low = mid + 1;
			mid = (low + high) / 2;
		}
		else if (a[mid] < n) {
			high = mid - 1;
			mid = (low + high) / 2;
		}
		//printf("1");
	}
	//printf("chu");
	if (m == 0)
		printf("查找失败，输入的数%d不存在于数组中\n",n);
	return 0;
}