#include<stdio.h>

int days(int a,int b,int c);
int main() {
	int a, b, c,d;
	printf("��������ݣ�\n");
	scanf("%d",&a);
	printf("�������·ݣ�\n");
	scanf("%d", &b);
	printf("�����������\n");
	scanf("%d", &c);
	d = days(a, b, c);
	printf("%d��%d��%d����%d��ĵ�%d��",a,b,c,a,d);
}


int days(int a, int b, int c) {
	int day=0;
	if (a % 400 == 0 || (a % 100 != 0 && a % 4 == 0)) {
		printf("��һ��������\n");
		for (int i = 1; i < b; i++) {
			if (i == 1)
				day = day + 31;
			else if (i == 2)
				day = day + 29;
			else if (i % 2 == 0)
				day = day + 30;
			else if (i % 2 != 0)
				day = day + 31;
		}
	}
	else {
		printf("��һ�겻������\n");
		for (int i = 1; i < b; i++) {
			if (i == 1)
				day = day + 31;
			else if (i == 2)
				day = day + 28;
			else if (i % 2 == 0)
				day = day + 30;
			else if (i % 2 != 0)
				day = day + 31;
		}
	}
	day = day + c;
	return day;
}