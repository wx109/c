#include<stdio.h>

int fun(int x, int y, int(*p)(int, int));
int max(int,int);
int min(int, int);
int add(int, int);
int main() {
	int a = 34, b = -21, n;
	printf("please choose 1,2or3:");
	scanf("%d",&n);
	if (n == 1)
		fun(a, b, max);
	else if (n == 2)
		fun(a, b, min);
	else if (n == 3)
		fun(a, b, add);
	return;
}

int fun(int x, int y, int(*p)(int, int)) {
	int result;
	result = (*p)(x, y);
	printf("%d\n",result);
}
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int min(int x, int y) {
	if (x > y)
		return y;
	else
		return x;
}
int add(int x, int y) {
	return x + y;
}