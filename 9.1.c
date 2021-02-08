#include<stdio.h>

struct Date {
	int year;
	int month;
	int day;
};

void days(struct Date d1);

int main() {
	struct Date d1;
	printf("请输入日期：\n");
	scanf("%d %d %d",&d1.year,&d1.month,&d1.day);
	days(d1);
}

void days(struct Date d1) {
	int sum = 0;
	if ((d1.year % 4 == 0 && d1.year % 100 != 0) || d1.year % 400 == 0) {
		if (d1.month == 1)
			sum = d1.day;
		else if (d1.month == 2)
			sum = 31 + d1.day;
		else {
			sum = 60+d1.day;
			for (int i = 3; i < d1.month; i++) {
				if (i <= 7) {
					if (i % 2 == 0)
						sum = sum + 30;
					else
						sum = sum + 31;
				}
				else if (i >= 8) {
					if (i % 2 == 0)
						sum = sum + 31;
					else
						sum = sum + 30;
				}
			}
		}
	}
	else {
		if (d1.month == 1)
			sum = d1.day;
		else if (d1.month == 2)
			sum = 31 + d1.day;
		else {
			sum = 59+d1.day;
			for (int i = 3; i < d1.month; i++) {
				if (i <= 7) {
					if (i % 2 == 0)
						sum = sum + 30;
					else
						sum = sum + 31;
				}
				else if (i >= 8) {
					if (i % 2 == 0)
						sum = sum + 31;
					else
						sum = sum + 30;
				}
			}
		}
	}
	printf("这是今年的第%d天\n",sum);
}