#include<stdio.h>

int main() {
	int F[20] = { 1,1 };
	for (int i = 2; i <= 19; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
	for (int i = 0; i <= 19; i++) {
		if (i % 5 == 0)
			printf("\n");
		printf("%12d",F[i]);
	}
	return 0;
}

