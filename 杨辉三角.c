#include<stdio.h>

int main() {
	int a[10][10];
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i == j)
				a[i][j] = 1;
			else if (j == 0)
				a[i][j] = 1;
			else if (j > 0 && j < i)
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			else
				a[i][j] = 0;
		}
	}
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}