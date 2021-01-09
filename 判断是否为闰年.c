#include<stdio.h>

int main() {
	int y;
	printf("please enter the year:\n");
	scanf_s("%d",&y);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		printf("the %d is leap year.\n", y);
	else
		printf("the %d is not leap year.\n",y);
	return 0;
}