#include<stdio.h>

int main() {
	char a[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			a[i][j] = '1';
		}
	}
	printf("please enter a number:\n");
	scanf("%c",a[1][1]);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("a[%d][%d]=%c\n",i+1,j+1,a[i][j]);
		}
	}
}