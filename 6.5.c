#include<stdio.h>

int main() {
	int a[5] = { 8,6,5,4,1 };
	int temp;
	for (int i = 0; i <= 1; i++) {
		temp = a[i];
		a[i] = a[4 - i];
		a[4 - i] = temp;
	}
	for (int i = 0; i <= 4; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}