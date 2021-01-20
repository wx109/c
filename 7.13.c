#include<stdio.h>


int legendre(int n, int x);

int main() {
	int n, x;
	printf("please enter n and x:\n");
	scanf("%d %d",&n,&x);
	int l;
	l = legendre(n, x);
	printf("½á¹ûÊÇ£º%d\n",l);
}

int legendre(int n, int x) {
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	else
		return (2 * n - 1) * x - legendre(n - 1, x) - (n - 1) * legendre(n - 2, x) / n;
}