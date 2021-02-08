#include<stdio.h>

int main() {
	int a[10], b[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i;
		b[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			b[i] = a[i];
		else
			b[i] = a[i] + b[i - 1];
	}
	for (int i = 0; i < 10; i++) {
		printf("b[%d]=%d\n",i,b[i]);
	}
}