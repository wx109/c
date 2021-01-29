#include<stdio.h>
void shift(int a[3][3]);
int main() {
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	shift(a);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(a+i)+j));
			//printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void shift(int a[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j&&i<j) {
				int temp;
				temp = *(*(a + i) + j);
				*(*(a + i) + j) = *(*(a + j) + i);
				*(*(a + j) + i) = temp;
			}
		}
	}
}