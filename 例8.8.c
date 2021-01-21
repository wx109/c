#include<stdio.h>
#include<string.h>

void shift(int* p, int n);
int main(){
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("the original array:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	shift(a,10);
	printf("the array has been inverted:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void shift(int* p, int n) {
	int* i, * j,* m;
	i = p;
	j = p + n - 1;
	m = p + (n - 1) / 2;
	for (; i < m; i++, j--) {
		int temp;
		temp = *i;
		*i = *j;
		*j = temp;
	}
}