#include<stdio.h>
#define N 15
int main() {
	int a[N];
	printf("��Ӵ�С��������a[N]��ֵ��\n");
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
			printf("����������һ����ȷ��ֵ��\n");
	}
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("������Ҫ���ҵ���n��\n");
	scanf_s("%d",&n);

	while (low<=high) {
		if (a[mid] == n)
		{
			printf("���ҳɹ���λ������ĵ�%dλ\n", mid + 1);
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
		printf("����ʧ�ܣ��������%d��������������\n",n);
	return 0;
}