#include<stdio.h>

int main() {
	int age(int num);
	printf("������Ҫ������ѧ���ı�ţ�\n");
	int n;
	scanf("%d",&n);
	printf("����������Ϊ��%d\n",age(n));	
}

int age(int num) {
	if (num == 1)
		return 10;
	if (num != 1)
		return age(num - 1) + 2;
}