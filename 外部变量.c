#include<stdio.h>

int main() {
	int max();
	extern int A, B, C;
	printf("��������������ֵ��\n");
	scanf("%d %d %d",&A,&B,&C);
	printf("������������Ϊ��%d",max());
}
int A, B, C;

int max() {
	int m;
	m = A > B ? A : B;
	if (m > C)
		return m;
	else
		return C;
}