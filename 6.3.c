#include<stdio.h>

int main() {
	int a[3][3];
	int sum=0;
	printf("������3*3�����ֵ��\n");
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("�������%d�е�%d�е�ֵ��\n",i+1,j+1);
			scanf_s("%d",&a[i][j]);
			if (i == j)
				sum = sum + a[i][j];
		}
	}
	printf("�Խ���֮��Ϊ��%d",sum);
}