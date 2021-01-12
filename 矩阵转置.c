#include<stdio.h>

int main() {
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2];
	printf("¾ØÕóaÎª£º\n");
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("%5d",a[i][j]);
			//printf("\n");
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("¾ØÕóbÎª£º\n");
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 1; j++) {
			printf("%5d",b[i][j]);
			//printf("\n");
		}
		printf("\n");
	}
	return 0;
}