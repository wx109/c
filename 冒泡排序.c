#include<stdio.h>

int main() {
	//int a[6] = { 9,8,5,4,2,0 };
	int a[10];
	int count;//���������
	for (int i = 0; i <= 9; i++) {
		printf("������a[%d]��ֵ��\n", i);
		scanf_s("%d",&a[i]);
	}
	printf("���������Ϊ��");
	for (int i = 0; i <= 9; i++) {
		//printf("���������Ϊ��");
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
	printf("���������Ϊ��");
	for (int i = 0; i <= 9; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}