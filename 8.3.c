#include<stdio.h>

void input(int* p);
void output(int* p);
void shift(int *p);
int main() {
	int a[10];
	int* p = a;
	input(p);
	shift(p);
	printf("经过转换后为：\n");
	output(p);
	return 0;
}

void input(int* p) {
	printf("please enter 10 numbers:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", p+i);
	}
	printf("the ten numbers are:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void shift(int* p) {
	int min = *p;
	int k=0;
	for (int i = 1; i < 10; i++) {
		if (min > * (p + i)) {
			min = *(p + i);
			k = i;
		}
	}
	if (k != 0) {
		int temp;
		temp = *p;
		*p = *(p + k);
		*(p + k) = temp;
	}
	int max = *p;
	for (int i = 1; i < 10; i++) {
		if (max < * (p + i)) {
			max = *(p + i);
			k = i;
		}
	}
	if (k != 9) {
		int temp;
		temp = *(p+9);
		*(p + 9) = *(p + k);
		*(p + k) = temp;
	}
}

void output(int* p) {
	for (int i = 0; i < 10; i++) {
		printf("%d ",*(p+i));
	}
}