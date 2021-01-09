#include<stdio.h>

int main() {
	for (int i = 1; i <= 20;) {
		for (int count = 1; count <=5; count++) {
			printf("%d\t",i);
			i++;
		}
		printf("\n");
	}
}