#include<stdio.h>
int main() {
	int m, n, t;
	int a, b;//���Լ��������С������
	printf("��������������\n");
	scanf_s("%d %d", &m, &n);
	if (m > n) {
		t = m;
		m = n;
		n = t;
	}//��֤m<n

	for (int i = 1; i <= n;i++) {
		if (n % i == 0 && m%i == 0)
			a = i;
	}
	//printf("%d\n",a);

	for (int i = m; i <= m * n; i++) {
		if (i % m == 0 && i%n == 0)
		{
			b = i;
			break;
		}
	}
	printf("���Լ���ǣ�%d\n��С��������:%d\n",a,b);

}