#include<stdio.h>

int main() {
	float r;//������
	int n;//����
	float p = 1;//��������ȱ���
	int i=1;
	printf("�������������ʣ�\n");
	scanf_s("%f",&r);
	printf("������������\n");
	scanf_s("%d", &n);

	while (i < n + 1) {
		p = p * (1 + r);
		i++;
	}

	printf("���ڵ�������ֵ��%d��ǰ��%f��",n,p);
	return 0;
	
}