#include<stdio.h>

int days(int a,int b,int c);
int main() {
	int a, b, c,d;
	printf("请输入年份：\n");
	scanf("%d",&a);
	printf("请输入月份：\n");
	scanf("%d", &b);
	printf("请输入号数：\n");
	scanf("%d", &c);
	d = days(a, b, c);
	printf("%d年%d月%d号是%d年的第%d天",a,b,c,a,d);
}


int days(int a, int b, int c) {
	int day=0;
	if (a % 400 == 0 || (a % 100 != 0 && a % 4 == 0)) {
		printf("这一年是闰年\n");
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
		printf("这一年不是闰年\n");
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