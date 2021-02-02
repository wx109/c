#include<stdio.h>

int main() {
	char* month_name[13] = { "illegal month","January","February","March","April","May","June","July","August","September","October","November","December" };
	int n;
	printf("input month:\n");
	scanf("%d",&n);
	if ((n <= 12) && (n >= 1))
		printf("it is %s\n", *(month_name + n));
	else
		printf("it is wrong");
	return 0;
}